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
	int i,n,k=0,j;
	cin>>n;
    double x[100],y[100],d[1000],dis=0;
	for(i=0;i<=999;i++) d[i]=0;
	for(i=0;i<n;i++)
    {
		cin>>x[i]>>y[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{ d[k]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
		k=k+1;
		}
	}
	for(k=0;k<1000;k++)
	{
       if (d[k]>dis)
		   dis=d[k];
	}
          printf("%.4f\n", dis);
		return 0;
}
	