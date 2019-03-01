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
	int a[1000],i,m,n,j;
	float s=0;
	a[0]=1;
	a[1]=1;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			a[j+1]=a[j]+a[j-1];
			s=s+(float)a[j+1]/a[j];
		}
		printf("%.3f\n",s);
		s=0;
	}
	return 0;
}