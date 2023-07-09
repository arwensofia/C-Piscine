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
#include <stddef.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*dest;
	char	*src;

	*dest = dest;
	*src = src;
	while (*dest)
	{
		*dest ++;
	}
	while (*src)
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';
	return (dest);
}
