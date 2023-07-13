/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:19:03 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/12 08:19:05 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	number;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	sign = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign++;
		}
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	number *= 1 - (2 * (sign % 2));
	return (number);
}

// int main()
// {
// 	printf("%d\n", ft_atoi("  -+---+--34781a33sddss"));
// 	return 0;
// }