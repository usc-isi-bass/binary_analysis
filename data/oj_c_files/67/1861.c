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

int main(){
	int n,a,b,i,m;
	double x,z;
	double y[100];
	double sz[100];
	scanf("%d%d%d",&n,&a,&b);
	x=1.0*b/a;
	m=2*n-2;
	for(i=0;i<m;i++)
	{
		scanf("%lf",&(sz[i]));
	}
	for(i=0;i<m;i=i+2)
	{
		y[i]=sz[i+1]/sz[i];
	}
	for(i=0;i<m;i=i+2)
	{
		z=y[i]-x;
		if(z>0.05)
		{
			printf("better\n");
		}
		else if(-z>0.05)
		{
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	
	}
	return 0;
}