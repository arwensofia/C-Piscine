/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:54:05 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/12 16:23:17 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	iterative_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		int = result
		result = 1;
		while (nb > 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
}

/*int main()
{
    int number = 20;
    int factorial = iterative_factorial(number);

    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}
*/
