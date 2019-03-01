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
	int i,j,n,x;
	double a[1000],*p,y,z;
	cin>>n;
	for(i=0;i<n;i++)
	{
		y=z=0;
		cin>>x;
		for(j=0;j<x;j++)
			cin>>a[j];
		p=a;
		for(j=0;j<x;j++)
			y+=*(p+j);
		y=y/x;
		for(j=0;j<x;j++)
			z+=pow(*(p+j)-y,2);
		z=sqrt(z/x);
		printf("%.5lf\n",z);
	}
	return 0;
}