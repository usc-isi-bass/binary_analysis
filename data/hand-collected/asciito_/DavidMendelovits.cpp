#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        i += 1;
    }
    return (i);
}

int ft_atoi(char *str)
{
    int num;
    int str_ptr;
    int sign;
    int div;

    if (strcmp(str, "-2147483648") == 0)
    {
        return (-2147483648);
    }
    str_ptr = ft_strlen(str) - 1;
    sign = 1;
    if (str[0] == '-')
    {
        sign = -1;
    }
    num = 0;
    div = 1;
    while (str_ptr >= 0)
    {
        num += (str[str_ptr] - '0') * div;
        div *= 10;
        str_ptr -= 1;
    }
    return (num * sign);
    int num_len;
}
