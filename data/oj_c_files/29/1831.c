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
	float a[100],b[100];
	a[0]=2;a[1]=3;
	b[0]=1;b[1]=2;
	for(int i=2;i<100;i++)
	{
		a[i]=a[i-1]+a[i-2];
		b[i]=b[i-1]+b[i-2];
	}
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int m;
		scanf("%d",&m);
		float sum=0;
		for(int j=0;j<m;j++)
		{
			sum+=a[j]/b[j];
		}
		printf("%.3f\n",sum);
	}
	return 0;
}
