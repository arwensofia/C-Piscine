/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelazegu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:02:59 by aelazegu          #+#    #+#             */
/*   Updated: 2023/07/11 16:14:36 by aelazegu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str [length] != '\0')
	{
		length++;
	}
	return (length);
}

/*
int main()
{
    char *str = "Cats and dogs are friends";
    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
*/
