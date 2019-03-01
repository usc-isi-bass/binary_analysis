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
	double x[100],y[100],d,maxd;
	int i,j,k,m;
	maxd=0;
	cin>>k;
	for(i=0;i<k;i++)
		cin>>x[i]>>y[i];
	for(j=0;j<k;j++)
	{
		for(m=j+1;m<k;m++)
		{
			d=sqrt(fabs((x[j]-x[m])*(x[j]-x[m])+(y[j]-y[m])*(y[j]-y[m])));
			if(d>maxd)
				maxd=d;
			}
	}
   	cout<<maxd;
	return 0;
}