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
	int n,k=0;
	cin>>n;
	double x[100],y[100],d[500];
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			d[k++]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
		}
	}
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<k-i;j++)
		{
			if(d[j]<d[j+1]) swap(d[j],d[j+1]);
		}
	}
	cout<<fixed<<setprecision(4)<<d[0]<<endl;
	return 0;
}