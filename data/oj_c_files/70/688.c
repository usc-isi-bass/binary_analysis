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

void main()
{
	double len,lenmax,x[100],y[100];
	int i,j,n;
	lenmax=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%lf%lf",&x[i],&y[i]);
	}
	for(i=0;i<=n-2;i++)
	{ 
        for(j=i+1;j<=n-1;j++)
		{
           len=sqrt((x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]));
		   if(len>lenmax)
			  lenmax=len;

		}
	}
	
     printf("%.4lf\n", lenmax);
}