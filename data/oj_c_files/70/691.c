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
	int n,i,j;
	double x[999],y[999],z[999],max=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(j=1;j<n;j++)
	{
	   for(i=j;i<=n;i++)
	   {
		   z[j+i]=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
			   if(z[i+j]>max)
				   max=z[i+j];
	   }
	}
	printf("%.4f\n",max);
	return 0;
}