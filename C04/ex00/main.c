#include <stdio.h>

int ft_strlen(char *str);

int main()
{
    char *str = "Cats and dogs are friends";
    int length = ft_strlen(str);
    printf("Length of the string: %d\n", length);
    return 0;
}
