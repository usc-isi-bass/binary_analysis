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
    int n,a[200000],i,b[200000],j=1,d=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
                     scanf("%d",&a[i]);
                     b[j]=a[i];
                     j++;
    }
                     printf("%d",b[1]);
    for(j=2;j<=n;j++)
    {
                     d=0;
                     for(i=1;i<=j-1;i++)
                     {
                                      if(b[j]==a[i])
                                      {d++;}
                     }
                     if(d==0)
                     printf(" %d",b[j]);
    }
    getchar();
    getchar();
    getchar();
}