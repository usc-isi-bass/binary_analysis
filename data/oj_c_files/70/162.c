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


struct po
{
	double x;
	double y;
};

main()
{
	int n;
	int i,j;
	po *a;
	double b;
	double *f;
	b=0.0;
	cin>>n;
	a=(struct po*)malloc(sizeof(po)*n);
	f=(double*)malloc(sizeof(double)*n*n);
	for(i=0;i<n;i++)
		cin>>a[i].x>>a[i].y;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			
		{
			f[i*j]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
		if(f[i*j]>b)
			b=f[i*j];
		}
	}
	
	cout<<setprecision(6)<<b;
	return 0;
}
