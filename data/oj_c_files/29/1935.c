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
	int m,i,j,n[100],x=2,y=1;
	double a[100],b[100],s;
	scanf("%d",&m);
	a[1]=x*1.00/y;
	s=a[1];
	for(i=1;i<=m;i++)
	{	
		scanf("%d",&n[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<n[i];j++)
		{
			x=x+y;
			y=x-y;
			a[j+1]=x*1.00/y;
			s=s+a[j+1];
		}
		b[i]=s;
		x=2;
		y=1;
		s=a[1];
	}
	for(i=1;i<=m;i++)
	{
		printf("%.3f\n",b[i]);
	}
	return 0;
}