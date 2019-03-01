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


int main()
{
    int a[110], b[110], c, i, j, k;
    char st[110];

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    gets(st);
    for(i=0; st[i]!='\0'; i++)
    {
        a[i] = st[i] - '0';
    }
    a[i] = -1;
    for(i = 0; a[i] != -1; i++)
    {
        b[i+1] = -1;
        if(a[i] < 13)
        {
            b[i]=0;
            if(a[i+1] != -1) a[i+1] += a[i]*10;
            continue;
        }
        else
        {
            b[i] = a[i]/13;
            if(a[i+1] != -1)
                a[i+1] += (a[i]%13)*10;
            else
                a[i] = a[i]%13;
        }
    }
    c = a[i-1];
    for(k=0; b[k]==0; k++);
    if(b[k] == -1 ) printf("0");
    else
    for(i=k; b[i]!=-1; i++)
        printf("%d", b[i]);
    printf("\n%d\n", c);
    return 0;
}
