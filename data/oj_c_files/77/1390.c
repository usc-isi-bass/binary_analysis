#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char a[100];
void match(char a[], char b, char g)
{
    int i, j;
    for (i = 0; ; i++)
    {
        if (a[i] == g)
            break;
    }
    for (j = i; j >= 0; j--)
    {
        if (a[j] == b)
        {
            cout << j << " " << i << endl;
            a[i] = a[j] = '*';
            break;
        }
    }
    if (j == 0)
        return;
    match (a, b, g);
}
int main()
{
    char b, g;
    cin >> a;
    b = a[0];
    for (int i = 1; ; i++)
    {
        if (a[i] != a[0])
        {
            g = a[i];
            break;
        }
    }
    match(a, b, g);
    return 0;
}