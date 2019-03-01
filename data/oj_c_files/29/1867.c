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
	int m,n,i,j;
	scanf("%d", &m);
	float a[200];
	float b[200];
	float s;
	a[1]=2;
	a[2]=3;
	b[1]=1;
	b[2]=2;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		s=0;
		for(j=1;j<=n;j++)
		{
			a[j+2]=a[j]+a[j+1];
			b[j+2]=b[j]+b[j+1];
			s=s+(a[j]/b[j]);
		}
		printf("%.3f\n", s);
	}

	return 0;
}
