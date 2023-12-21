
# Simple Shell

The Simple Shell is a minimalistic command-line interpreter that allows users to execute basic commands and interact with the system. It supports executing external commands and includes a few built-in commands.

## Features

- Execute external commands.
- Built-in commands: `exit` and `env`.
- Print environment variables.
- Basic interactive mode.

## Getting Started

### Prerequisites

- C compiler (e.g., GCC)

### Compilation

Compile the simple shell program using the provided Makefile:

```bash
make
Usage
Run the compiled program:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
bash
Copy code
./hsh
The shell will display a prompt where you can enter commands. For example:

bash
Copy code
$ ls
$ env
$ exit
To exiit the shell, use the exit command.

authors are to be finned on their github
this project was made by students from holberton school toulouse.
