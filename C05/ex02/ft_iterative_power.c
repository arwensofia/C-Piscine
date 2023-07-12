/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:54:34 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/12 16:54:55 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		num *= nb;
		power--;
	}
	return (num);
}

/*
int main()
{
    printf("%d\n", ft_iterative_power(2, 4));
    printf("%d\n", ft_iterative_power(0, 4));
    printf("%d\n", ft_iterative_power(-3, -4));
    return 0;
}
*/
