#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[20] = "Hello, ";
	char src[] = "world!";
	unsigned int nb = 6;

	ft_strncat(dest, src, nb);
	printf("Concatenated string: %s\n", dest);

	return 0;
}
