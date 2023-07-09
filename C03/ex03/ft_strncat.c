/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:32:01 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/06 18:32:15 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest++ = *src++;
		nb--;
	}
	while (nb > 0)
	{
		*dest++ = '\0';
		nb--;
	}
	*dest = '\0';
	return (dest_start);
}
