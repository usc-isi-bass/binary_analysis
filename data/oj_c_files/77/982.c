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
    int i,j,k,n,p,m,c,l,a[10000],b[10000];
    char str[500],x,y;
    gets(str);
    n=strlen(str);
    y=str[0];
    for (i=0;i<n;i++)
    if (str[i]!=y) x=str[i];
    for (i=0;i<n;i++)
    {
        if (str[i]==x)
        {
            for (j=i;j>=0;j--)
                if (str[j]==y)
                {
                    printf("%d %d\n",j,i);
                    str[j]=' ';
                    break;
                }
            str[i]=' ';
        }
    }
}
