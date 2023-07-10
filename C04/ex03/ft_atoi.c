#include <stdio.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;

    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -sign;
        str++;
    }

    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}