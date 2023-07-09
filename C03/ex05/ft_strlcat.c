/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <aelazegu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:32:54 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/08 20:15:11 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int dest_len = 0;
    unsigned int total_len;

    while (dest[dest_len] && dest_len < size)
        dest_len++;

    total_len = dest_len;

    while (src[total_len - dest_len] && total_len < size - 1)
    {
        dest[total_len] = src[total_len - dest_len];
        total_len++;
    }

    if (dest_len < size)
        dest[total_len] = '\0';

    while (src[total_len - dest_len])
        total_len++;

    return total_len;
}