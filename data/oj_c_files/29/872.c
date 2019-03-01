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
	float a[1000];
	float b[1000];
	int m,i,n,j;
	float s=0;
	a[1]=1;
	a[2]=2;
	for(i=3;i<999;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	b[1]=2;
	for(i=2;i<1000;i++)
	{
		b[i]=(a[i-1]/a[i])+1;
	}
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		s=s+b[j];
		printf("%.3f\n",s);
		s=0;
	}
	return 0;
}

