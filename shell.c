int main(int argc, char *argv[], char *envp[]) {
    char command[MAX_COMMAND_LENGTH];
    char *args[MAX_ARGS];
    char full_path[MAX_PATH_LENGTH];

    while (1) {
        if (!display_prompt()) {
            return EXIT_FAILURE;
        }

        if (fgets(command, sizeof(command), stdin) == NULL) {
            printf("\n");
            break;
        }

        command[strcspn(command, "\n")] = '\0';

        if (strlen(command) == 0) {
            continue;
        }

        int arg_count = 0;
        char *token = strtok(command, " ");
        while (token != NULL && arg_count < MAX_ARGS - 1) {
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL;

        if (strcmp(args[0], "exit") == 0) {
            printf("Exiting shell...\n");
            return EXIT_SUCCESS;
        } else if (strcmp(args[0], "env") == 0) {
            if (!print_environment(envp)) {
                return EXIT_FAILURE;
            }
            continue;
        }

        if (!find_executable(args[0], full_path)) {
            printf("Command not found: %s\n", args[0]);
            continue;
        }

        if (!execute_command(full_path, args)) {
            return EXIT_FAILURE;
        }
    }

    return EXIT_SUCCESS;
}
