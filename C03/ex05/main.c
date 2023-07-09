#include <stddef.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = sizeof(dest);

    unsigned int result = ft_strlcat(dest, src, size);
    printf("%s\n", dest);
    printf("String Length: %u\n", result);
    return 0;
}