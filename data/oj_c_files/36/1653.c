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

char f(char a[])
{
    int i,j,k=strlen(a);
    char temp;
    for(j=0;j<k;j++)
    {
        for(i=0;i<k-j;i++)
        {
            if(a[i]<a[i-1])
            {
                temp=a[i];
                a[i]=a[i-1];
                a[i-1]=temp;
            }
        }
    }
    return'o';
}
int main()
{
    char a1[1000],a2[1000];
    scanf("%s %s",a1,a2);
    f(a1);
    f(a2);
    if(strcmp(a1,a2)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
