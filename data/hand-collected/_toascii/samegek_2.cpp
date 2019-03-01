#include <stdio.h>
#include <limits.h>
#include <string.h>

#define MAXLEN 1000


void reverse(char s[])
{
    int i, j;
    char temp;

    for ( i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

/* itoa3 accepts 3 arguments, the third argument specify the 
 * the minimum width of the output string. If no enough charcters, 
 itoa3 pads blanks to the left of the string. */

void itoa3(int n, char s[], int w)
{
    int i, j, len, sign;
    
    i = 0;
    sign = n;

    if (sign < 0)
    {
        if (n % 10 <= 0)
        {
            s[i++] = -(n % 10) + '0';
        }
        else
        {
            s[i++] = 10 - n % 10 + '0';
        }

        n /= 10;
        n = -n;
    }


    while (n != 0)
    {
        s[i++] = n % 10 + '0';
        n /= 10;
    }

    if (sign < 0)
        s[i++] = '-';

    s[i] = '\0';
    
    len = strlen(s);
    if (len < w)
    {
        for (j = 0; j < w - len; j++)
        {
            s[i++] = ' ';
        }
        s[i] = '\0';
        reverse(s);
    }
    else
    {
        reverse(s);
    }

}
