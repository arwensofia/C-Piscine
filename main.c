/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stuna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:10:43 by stuna             #+#    #+#             */
/*   Updated: 2023/07/15 17:29:12 by stuna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

#define MAX_LINE_LENGTH 100

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_atoi(const char *str)
{
	int i;
	int nb;
	int neg;

	neg = 0;
	nb = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		neg = 1;
	if (*str == '-' || *str == '+')
		str++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (str[i] - 48) + (10 * nb);
		i++;
	}
	if (neg == 1)
		nb = nb * -1;
	return (nb);
}

void ft_print(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
	write(1, "\n", 1);
}
void open_file(int number, char* word) 
{
    int file = open("numbers.dict", O_RDONLY);
    if (file == -1) 
	{
        ft_print("Dict Error");
        return;
    }
	char buffer;
	ssize_t bytesRead;
	char line[MAX_LINE_LENGTH];
	int lineIndex = 0;
	int colonFound = 0;
	int dict_number = 0;
	char* dict_word = malloc(MAX_LINE_LENGTH * sizeof(char));
	while ((bytesRead = read(file, &buffer, sizeof(buffer))) > 0)
	{
		if (buffer != '\n')
		{
			if (colonFound)
			{
				if (lineIndex < MAX_LINE_LENGTH - 1)
				{
					dict_word[lineIndex++] = buffer;
				}
				else
				{
                // Handle exceeding the word length limit
                break;
				}
			}
			else if (buffer == ':')
			{
				line[lineIndex] = '\0';
				dict_number = ft_atoi(line);
				lineIndex = 0;
				colonFound = 1;
			}
			else
			{
				if (lineIndex < MAX_LINE_LENGTH - 1)
				{
					line[lineIndex++] = buffer;
				}
				else
				{
                // Handle exceeding the line length limit
                break;
				}
			}
		}
		else
		{
			line[lineIndex] = '\0';
			if (colonFound && dict_number == number)
			{
				dict_word[lineIndex] = '\0';  // Terminate the dict_word string
				ft_strcpy(word, dict_word);
				close(file);
				free(dict_word); // Free dynamically allocated memory
				return;
			}
			lineIndex = 0;
			colonFound = 0;
		}
	}

close(file);
free(dict_word); // Free dynamically allocated memory
ft_strcpy(word, "Unknown");	
}
int main(int argc , char **argv)
{
	if (argc == 2) 
	{
        int number = ft_atoi(argv[1]);
        char* word = malloc(MAX_LINE_LENGTH  * sizeof(char));
        open_file(number, word);
		ft_print(word); 
        free(word);
	}
}	
