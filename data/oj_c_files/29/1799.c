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
    int m,n,i,k=1;
    float sum,d,a,b,c;
    scanf("%d",&m);
    a=1,b=2,sum=0;
    for(i=1;i<=m;i=i+1)
    {
        scanf("%d",&n);
         while(k<=n)
         {
                    d=b/a;
                    sum=sum+d;
                    c=b;
                    b=b+a;
                    a=c;
                    k=k+1;
         }
         printf("%.3f\n",sum);
         sum=0;
         k=1;a=1;b=2;c=2;
         

    }
         return 0;
}