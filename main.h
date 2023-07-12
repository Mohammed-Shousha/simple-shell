#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define UNUSED __attribute__((unused))
#define MAX_ARGS_COUNT 100
#define MAX_ARG_LEN 100

extern char **environ;

void run_cmd(char *line_buffer, char *prog_name);
void run_sys_cmd(char *prog_name, char **argv, int n);

int parse_cmd(char *cmd, char **argv);
char *parse_path(char *cmd);

void exit_shell(char *line_buffer, char **argv);
void _env(void);

char *_getenv(char *var);

#endif
