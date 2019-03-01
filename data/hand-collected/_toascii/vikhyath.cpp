#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void str_rev(char *str, int size)
{
    int i = 0, j = size-1;
    if (str[0] == '-'){
        i = 1;
    }
    for (; i<=j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void itoarev(char *str, int x, int count)
{
    int remainder;
    while (x) {
        remainder = x % 10;
        str[count] = remainder + '0';
        x = x / 10;
        count++;
        if (count%SIZE == 0) {
            char *temp = (char*)realloc(str, count*2*sizeof(char));
            if (temp == NULL) {
                exit(0);
            }
        }
    }
    str[count] = '\0';
    str_rev(str, count);
}
