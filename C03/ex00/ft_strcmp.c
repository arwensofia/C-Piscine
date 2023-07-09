/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <aelazegu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:25:47 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/09 17:26:00 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int main()
{
    char str1[] = "Hello";
    char str2[] = "Cats";

    int result = ft_strcmp(str1, str2);
    printf("eeeeeeeeeeeeeeeee: %d\n", result);

    return 0;
}