#include <stdio.h>

void ft_putnbr(int nb)
{
    if (nb < 0)
{
        putchar('-');
        nb = -nb;
    }

    if (nb >= 10)
{
        ft_putnbr(nb / 10);
    }

    putchar(nb % 10 + '0');
}