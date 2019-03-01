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
    int m=0,n,k=0,x=0;
    double sum=0,a=2,b=1,c=0;
    scanf("%d",&m);
    while(k<m)
    {
              scanf("%d",&n);
              while(x<n)
              {
                        sum=sum+a/b;
                        c=a;
                        a=a+b;
                        b=c;
                        x=x+1;
              }
              printf("%.3lf\n",sum);
              sum=0;
              x=0;
              a=2;
              b=1;
              c=0;
              k=k+1;
             }
   return 0;
}
                        
