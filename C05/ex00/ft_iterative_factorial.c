/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:53:42 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/12 09:44:33 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}

/*int main()
{
	printf("%d\n", ft_iterative_factorial (4));
	return (0);
}*/