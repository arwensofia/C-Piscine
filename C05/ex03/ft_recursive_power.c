/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:59:00 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/12 16:56:43 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

/*
int main()
{
    printf("%d\n", ft_recursive_power(5, 3));
    printf("%d\n", ft_recursive_power(0, 4));
    printf("%d\n", ft_recursive_power(-3, -4));
    printf("%d\n", ft_recursive_power(0, 0));
    printf("%d\n", ft_recursive_power(0, 4));
    printf("%d\n", ft_recursive_power(-3, -4));
    
    return 0;
}*/
