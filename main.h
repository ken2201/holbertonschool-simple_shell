#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX_COMMAND_LENGTH 100
#define MAX_ARGS 10
#define MAX_PATH_LENGTH 100

int executer_commande(char *commande);
int execute_command(char *command, char *args[]);
int find_executable(char *command, char *full_path);
int print_environment(char **env);
int display_prompt(void);
int main(int argc, char *argv[], char *envp[]);

#endif
