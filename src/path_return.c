/*
** EPITECH PROJECT, 2019
** path_return
** File description:
** path_return
*/

#include "my.h"
#include "minishell.h"

void path_return(char **ae, char *str)
{
    char *path = catch_settings(ae, "PWD");
    int nb = 0;

    path = my_strcat(path, str);
    /*for (int i = 0; str && str[i]; i++)
        if (str[i + 1] && str[i] == '.' && str[i + 1] == '.')
            nb++;
    if (nb > 0) {
        for (int i = my_strlen(path) - 1; path && i >= 0 && path[i]; i--) {
        }
    }*/
}
