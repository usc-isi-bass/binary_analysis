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
	double x[1000],y[1000],s[1000][1000],max=0,d;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
    for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
	
		{	d=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
		    s[i][j]=sqrt(d);
		if(s[i][j]>max)max=s[i][j];
	
		}
	}
	printf("%.4f\n",max);
	return 0;
}
