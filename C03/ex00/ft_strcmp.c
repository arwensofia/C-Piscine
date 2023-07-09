/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <aelazegu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:25:47 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/09 12:55:09 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 && *s2 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

/*

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char arr1[100] = "ok";
	char arr2[100] = "the quick brown fox jumped over the lazy dog";
	int x;

	x = ft_strcmp(arr1, arr2);
	printf("%d", x);
	return (0);
}

*/
