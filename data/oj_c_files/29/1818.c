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
   int a[100]={0};
   double fib[100]={0.0};
   int m,i,j;
   double sum=0.00;

   scanf("%d",&m);
   
   for(i=1;i<=m;i++)
	   scanf("%d",&a[i]);

   fib[1]=1.0;

   for(i=2;i<=99;i++)
       fib[i]=fib[i-1]+fib[i-2];

   for(i=1;i<=m;i++)
   {
      for(j=1;j<=a[i];j++)
	  {
	    sum=sum+fib[j+2]/fib[j+1];	  
	  } 
	  printf("%.3f\n",sum);
	  sum=0;   
   }






return 0;
}