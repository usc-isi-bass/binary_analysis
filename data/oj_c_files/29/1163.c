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
	int m,i,j,k;
	int a[10000]={1,2};
	double b[10000];
	int n[10000];
	scanf("%d",&m);
	for(k=2;k<10000;k++)
	{
		a[k]=a[k-2]+a[k-1];
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++)
	{
		b[i]=0;
		for(j=0;j<n[i];j++)
		{
			b[i]+=1.0*a[j+1]/a[j];
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%.3lf\n",b[i]);
	}
	return 0;
}
			
				




	


	
	