/*
** EPITECH PROJECT, 2021
** minishell
** File description:
** recreate a terminal
*/

#include <stdio.h>
#include <unistd.h>
#include "../lib/my.h"

void display(char **str)
{
    for (int i = 0; str[i]; i++) {
        my_puts(str[i]);
    }
}

char **fonction_env(char **str, char **envp)
{
    int nb = 0;

    for (; envp[nb] != NULL; nb++) {}
    str = malloc(sizeof(char *) * nb + 1);
    for(int i = 0; envp[i] != NULL; i++)
    {
        str[i] = my_strcpy(str[i], envp[i]);
        str[i + 1] = NULL;
    }
    return (str);
}

int main(int argc, char **argv, char **envp)
{
    char **str;
    char *path = NULL;
    char *buffer = malloc(sizeof(char) * 1);
    size_t bufsize = 100;

    str = fonction_env(str, envp);
    path = getcwd(path, 100);
    while (1) {
        my_putstr(path);
        my_putstr("%s> ");
        getline(&buffer, &bufsize, stdin);
        buffer[my_strlen (buffer) - 1] = '\0';
        if (strcmp(buffer, "env") == 0)
            display(str);
        if (strcmp(buffer, "exit") == 0) {
            my_puts("exit");
            break;
        }
    }
    return 0;
}