/*
** EPITECH PROJECT, 2019
** minishell
** File description:
** minishell
*/

#include "my.h"

#ifndef MINISHELL_H_
#define MINISHELL_H_

/*typedef struct prompt_t {
    char **sets;
} prompt;*/

typedef struct command_t {
    char *name;
    char **env;
    char **args;
} command;

int minishell(int ac, char **av, char **ae);
void exec_prog(command *arg, char **ae);
bool disp_prompt(command *arg);
void disp_env(command *arg);
void clean_strings(char **ae, char **params);
bool detect_if_cd(command *args, char *str);
void change_path(char **ae, char *str);
bool detect_if_setenv(command *arg, char *str);
bool detect_if_exit(char *str);
bool detect_if_env(command *arg, char *str);
bool detect_if_unsetenv(command *arg, char *str);
bool detect_cases(command *arg, char *str);
char *catch_settings(command *arg, char *name);
bool detect_name(char *ae, char *str);
char **path_settings(char **ae, char *bin);
void my_setenv(command *arg, char *name, char *str);
command *list_args(char *str, command *arg, int i);
void modify_path(command *arg, char *str);
char *cut_str(char *str);
void add_line(command *arg, char *name, char *str);

#endif /* MINISHELL_H_ */
