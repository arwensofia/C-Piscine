#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char arr1[50] = "Hellop";
	char arr2[50] = "Hellor";
	int x;

	x = ft_strcmp(arr1, arr2);
	printf("%d", x);
	return (0);
}
