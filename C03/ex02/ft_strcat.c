/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:31:31 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/08 15:35:16 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[a] = src[i];
			i++;
			a++;
	}
	dest[a] = '\0';
	return (dest);
}
