#include <stdio.h>
#include <string.h>

/* reverse: reverse string s in place */
void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itoa_2complement(int n, char s[])
{
    int i, sign;
    long long int ln;
    if ((sign = n) < 0) /* record sign */
    ln = -(long long int)n;
    /* make n positive */
    i = 0;
    do {
        /* generate digits in reverse order */
        s[i++] = ln % 10 + '0'; /* get next digit */
    } while ((ln /= 10) > 0);
    /* delete it */
    if (sign < 0)
    s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}