#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
int main()
{
    char str1[50] = "Hello";
    char str2[] = " World!";
    
    ft_strcat(str1, str2);
    printf("yeeeesssss: %s\n", str1);

    return 0;
}