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
	int k,n,i,j;
	double s;
	double x[1000];
	double pingjun,he,sum;
	scanf("%d",&k);
	for(i=0;i<k;i++)
    {
	   scanf("%d",&n);
	   sum=0.00;
	   for(j=0;j<n;j++)
	   {
		 scanf("%lf",&x[j]);
		 sum+=(double)x[j];
	   }
	   pingjun=(double)sum/n;
	   he=0.00;
	   for(j=0;j<n;j++)
	   {
		  he+=(double)(x[j]-pingjun)*(x[j]-pingjun);
	   }
	   s=(double)sqrt(he/n);
	   printf("%.5lf\n",s);
    }
	return 0;
}