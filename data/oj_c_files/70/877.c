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
	double max,d,y[100],x[100];
	max=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	    for(i=0;i<n-1;i++)
		{ 
				for(j=i+1;j<n;j++)
				{
					d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		            if(max<d) max=d;
				    }
		}
		
	printf("%.4f\n",max);

return 0;
}