/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <aelazegu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:32:40 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/08 19:43:31 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	char	*str_ptr;
	char	*find_ptr;

ptr = str;
	{
		if (*to_find == '\0')
			return (str);
	str_ptr = ptr;
		while (*ptr != '\0')
		{
		str_ptr = ptr;
		find_ptr = to_find;
			while (*find_ptr != '\0' && *str_ptr == *find_ptr)
			{
			str_ptr++;
			find_ptr++;
			}
			if (*find_ptr == '\0')
				return (ptr);
		ptr++;
		}
	}
	return (NULL);
}
