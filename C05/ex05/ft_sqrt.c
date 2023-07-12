/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:59:24 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/12 17:17:36 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	y;
	int	x;

	x = nb / 2;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (1)
	{
		y = (x + nb / x) / 2;
		if (y >= x)
		{
			return (x);
		}
		x = y;
	}
}

/*
int main()
{
    int number = 25;
    int squareRoot = ft_sqrt(number);

    printf("Square root of %d is: %d\n", number, squareRoot);

    return 0;
}
*/
