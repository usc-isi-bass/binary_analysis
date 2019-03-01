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

int f(int x)
{
    int i,t;
    double k;
    k=sqrt(x);
    if(x%2==0);
    t=0;
    if(x%2==1)
    {for(i=2;i<=k;i++)
     {
       if(x%i==0)
       break;
       }
       if(i>k)
       t=1;
       else
       t=0;
     }
       return t;
}
main()
{
   int m,j;
   scanf("%d",&m);
   for(j=3;j<=(m/2);j++)
   {
     if((f(j)==1)&&(f(m-j)==1))
     printf("%d %d\n",j,m-j);
     }
     getchar();
     getchar();
     getchar();
}
   
