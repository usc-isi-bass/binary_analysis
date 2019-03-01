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

/* itob converts n into base b string representation.
 * Note that if b > 16 then itob can't handle it correctly.*/
int itob(int n, char s[], int b)
{
    int i, sign;
    char digits[] = "0123456789ABCDEF";

    if (b > 16)
        return -1;

    i = 0;
    
    sign = n;

    /* handle the INT_MIN*/
    if (n < 0)
    {
        if (n % b <= 0)
        {
            s[i++] = digits[-(n % b)];
        }else
        {
            s[i++] = digits[b - (n % b)];
        }
        n /= b;
    }

    /* record the sign and make n positive*/
    if (sign < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        s[i++] = digits[n % b];
        n /= b;
    } 

    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';

    reverse(s);

    return 0;
}
