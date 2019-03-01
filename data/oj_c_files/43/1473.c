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

int fun(int x)
{ 
    int b=1;
    for(int a=2;a<x;a++)
    {
       if(x%a==0)
       {
          b=0;
          break; 
       }   
    } 
    return b;
}
main()
{
   int m,n,k,i;
   scanf("%d",&m);
   n=m/2;
   k=(n+1)/2;
   for(i=2;i<=k;i++)
   {
      int c=2*i-1;
      if(fun(c)==1&&fun(m-c)==1)
         printf("%d %d\n",c,m-c);                         
   }
   getchar();
   getchar();
}
