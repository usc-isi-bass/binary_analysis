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
	int m,n,i,k,a,b,j;
	int x[100],y[100];
	double result;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
	  for(k=0;k<n;k++)
	  {
                result=0;
	     	for(j=0;j<n;j++)
			{
	
			x[0]=2;
			x[1]=3;
			y[0]=1;
			y[1]=2;
			for(a=2;a<n;a++)
			{
				x[a]=x[a-1]+x[a-2];
				y[a]=y[a-1]+y[a-2];
			}
			result=result+1.0*x[j]/y[j];
			}
			


	  }
	
	 printf("%.3lf\n",result);
	}	
	return 0;
}