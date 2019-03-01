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

int f(int n)
{
	int a;
	if(n==1)
	{a=1;}
	if(n==2)
	{a=2;}
	if(n>2)
	{a=f(n-1)+f(n-2);}
	return a;
}

int main()
{
   int m,i;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
	   int l,j;
	   scanf("%d",&l);
	   float sum=0;
	   for(j=2;j<=l+1;j++)
	   {
		   sum+=(float)f(j)/(float)f(j-1);
	   }
	   printf("%.3f\n",sum);
   }
   return 0;
}
