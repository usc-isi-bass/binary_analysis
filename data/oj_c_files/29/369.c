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

void main()
{
	int m,n,i,j,a[1000],b[1000];
	float sum=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		a[0]=2;
        b[0]=1;
		sum=(float)a[0]/b[0];
		for(j=0;j<n-1;j++)
		{
			a[j+1]=a[j]+b[j];
			b[j+1]=a[j];
			sum+=(float)a[j+1]/b[j+1];
		}
		printf("%.3f\n",sum);
	}
}