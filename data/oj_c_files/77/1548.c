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




char a[110];
int l;
void vv(char a[], char b, char g)
{
    int i, flag = 0;
    l = strlen(a);
    for(i = 0; i < l; i++)
        if(a[i] != '*')
        flag = 1;
    if(flag == 0)
        return ;
    else
    {
    for(i = 0; i < l; i++)
    {
        if(a[i] == g)
        {
            for(int j = i - 1; j >= 0; j--)
            if(a[j] == b)
            {
                cout << j << " " << i << endl;
                a[j] = '*';
                a[i] = '*';
                break;
            }

        }
    }
    vv(a, b, g);
    }
}
int main()
{
    char b, g;
    cin >> a;
    l = strlen(a);
    b = a[0];
    g = a[l - 1];
    vv(a, b, g);

    return 0;
}
