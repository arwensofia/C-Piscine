/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:03:55 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/13 18:28:12 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int num;

// 	num = 42;
// 	ft_putnbr(num);
// 	printf("\n");
// 	num = -42;
// 	ft_putnbr(num);
// 	printf("\n");
// 	num = -2147483648;
// 	ft_putnbr(num);
// 	printf("\n");
// 	num = 0;
// 	ft_putnbr(num);
// }
