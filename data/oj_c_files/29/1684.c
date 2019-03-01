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
   int m,n,i;
   int  a[100]; 
   double sum=0;
   a[1]=1;
   a[2]=2;
   for (i=3;i<=100;i++) a[i]=a[i-1]+a[i-2];
   scanf("%d",&m);
   while(m>0)
   {
       scanf("%d",&n);
	   for (i=1;i<=n;i++) sum+=(double)a[i+1]/a[i];
	   printf("%.3lf\n",sum);
	   sum=0;
	   m--;
   }
   return 0;
}
