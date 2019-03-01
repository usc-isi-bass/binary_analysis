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
	int n;
	int m=0;
	cin>>n;
	double x[10000],y[10000];
	for(int i=0;i<n;i++)
		cin>>x[i]>>y[i];
	double max,z;
	max=0.0;
	for(int k=0;k<n;k++)
	{
		for(int l=0;l<n;l++)
		{z=sqrt(pow((x[l]-x[k]),2.0)+pow((y[l]-y[k]),2.0));
		if(max<z) max=z;}
	}
	
	cout<<max<<endl;
	return 0;
}