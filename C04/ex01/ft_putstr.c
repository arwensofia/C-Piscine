#include <stdio.h>

void ft_putstr(char *str)
{
    if (str != NULL)
{
        while (*str != '\0')
{
            putchar(*str);
            str++;
        }
    }
}