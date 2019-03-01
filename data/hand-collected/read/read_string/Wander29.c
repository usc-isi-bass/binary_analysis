#include <stdio.h>
#include <stdlib.h>

char *readString()
{
    char *str;
    char ch;
    size_t len = 0;

    str = malloc(sizeof(char));
    if(!str)
        return str;

    while( EOF != (ch = getchar()) && ch != '\n')
    {
        str[len++] = ch;

        str = realloc(str, sizeof(char)*len);
        if(!str)
            return str;
    }
    str[len++] = '\0'; 

    return str;
}
