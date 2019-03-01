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
    int m,n,i,j;
    int a[100],b[100];
    double sum=0.00;
    b[1]=1;b[2]=2;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&n);
        a[i]=n;
     }
     for(i=2;i<=99;i++)
     {
        b[i+1]=b[i]+b[i-1];
      }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=a[i];j++)
        {
           sum=sum+1.0*b[j+1]/b[j];
    
         }
        printf("%.3lf\n",sum);
        sum=0.00;
     }
     return 0;
}
