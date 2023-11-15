#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <limits.h>
#include <time.h>

extern char **environ;

char *addon_command(char *dir_path, char *command);
int perf(char **arguments);
int exisst(char *pathname);
int topup_args(char *entry, char **arguments);
void free_grid(char **grid, int heigth);
char *_getenvv(char *global_var);
void last_freee(char *entry);
int print_blunder(char **arguments, int counter);
int _printp(const char *prompt, unsigned int size);
int print_digits(int n);
int main(void);
int _strcmp(char *str1, char *str2);
char *_strdup(char *str);
int _strlen(const char *string);
int confirm_blt(char **arguments, int exisst_stat);
int confirm_path(char **arguments);




#endif

