#include <stdio.h>

#define abs(x) ((x) < 0 ? -(x) : (x))

void itoa(int n, char s[]);
void itoas(int n, char s[]);
void itoax(int n, char s[], int w);
void reverse(char s[]);

void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)
        n = -n;         
    i = 0;
    do
    {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void itoas(int n, char s[])
{
    int i, sign;
    void reverse(char s[]);

    sign = n;
    i = 0;
    do
    {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}

void itoax(int n, char s[], int w)
{
    int i, sign;
    void reverse(char s[]);

    sign = n;
    i = 0;
    do
    {
        s[i++] = abs(n % 10) + '0';
    } while ((n /= 10) != 0);
    if (sign < 0)
        s[i++] = '-';
    while (i < w)
        s[i++] = ' ';
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int i, j;
    char temp;

    i = 0;

    while (s[i] != '\0')
    {
        ++i;
    }
    --i;

    if (s[i] == '\n')
    {
        --i;
    }

    j = 0;
    while (j < i)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}