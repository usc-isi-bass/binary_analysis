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
   int n,week=0;
   scanf("%d",&n);
   int d[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   int i,day[13],sum=0;
   for(i=1;i<=12;i++)
   {
	   day[i]=sum+13;
	   sum+=d[i];
	   week=(day[i]%7+n-1)%7;

	   if(week==5) printf("%d\n",i);
   }
   return 0;
}

