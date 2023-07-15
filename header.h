/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:26:10 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/15 18:26:12 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
#define DICTIONARY_H

#define DICT_SIZE 100

typedef struct header
{
	int number;
	char *word;
} Entry;

typedef struct header
{
	Entry dict[DICT_SIZE];
	int count;
} Dictionary;

void trim(char *str);

#endif //DICTIONARY_H
