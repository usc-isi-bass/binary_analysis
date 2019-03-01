#include <stdio.h>
#include <limits.h>
#include <string.h>

#define MAXLEN 1000

void reverse(char str[]);


/* itoa convert n into its corresponding string representation. 
 * This version of ito can handle the value of -(2^(wordlength - 1))
 * in a 2's complement machine. */

void itoa(int n, char s[])
{
    int i, sign;
    
    i = 0;

    sign = n;

    /* handle the INT_MIN*/
    if (n < 0)
    {
        if (n % 10 <= 0)
        {
            s[i++] = -(n % 10) + '0';
        }else
        {
            s[i++] = 10 - n % 10 + '0';
        }
        n /= 10;
    }

    /* record the sign and make n positive*/
    if (sign < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        s[i++] = n % 10 + '0';
        n /= 10;
    } 

    if (sign < 0)
    {
        s[i++] = '-';
    }
    s[i] = '\0';

    reverse(s);
}


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