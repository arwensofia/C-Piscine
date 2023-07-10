#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str);

int main()
{
    char str[] = " ---+--+1234ab567";

    write(1, "Input string: ", 14);
    write(1, str, sizeof(str) - 1);
    write(1, "\n", 1);

    int num = ft_atoi(str);
    printf("Converted number: %d\n", num);

    return 0;
}