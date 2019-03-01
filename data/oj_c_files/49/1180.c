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

void f(char c[],char b[],int n,int i)
{
    if(i<=n-1)
        {
            b[i]=c[n-i-1];
            f(c,b,n,i+1);
        }
}
int main()
{
    char a[501],b[501]={0},c[501]={0};
    int n,i,j,k;
    gets(a);
    n=strlen(a);
    for(i=2;i<=n;i++)
        {
            for(j=0;j+i<=n;j++)
                {
                     for(k=0;k<i;k++)
                         {
                             c[k]=a[j+k];
                         }
                     f(c,b,i,0);
                     if(strcmp(c,b)==0)
                     printf("%s\n",c);
                     else continue;
                }
        }
    return 0;
}
