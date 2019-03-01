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
   int n,i=0,a,sum=0,m;
   scanf("%d",&n);
   while(i<=n*n)
   {

	   scanf("%d",&a);
       i=i+1;
   if(a==0)
	   sum=sum+1;
   }
   m=sum*sum/16+1-sum/2;
   printf("%d\n",m);
   return 0;
}