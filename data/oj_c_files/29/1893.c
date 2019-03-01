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
	int m,i,n,a[100];
	float N,x[100],y[100];
	scanf("%d",&m);
	x[1]=2; x[2]=3; y[1]=1; y[2]=2;
	for(i=1;i<=m;i++)
	{
		
		scanf("%d",&a[i]);
		if(a[i]==2)
		{
			N=3.5;
		}
		else if(a[i]==1)
		{
			N=2;
		}
		else
		{
			N=x[1]/y[1]+x[2]/y[2];
			for(n=3;n<=a[i];n++)
			{
				x[n]=x[n-1]+x[n-2];
				y[n]=y[n-1]+y[n-2];
				N=N+x[n]/y[n];
			}
		}
		printf("%.3f\n",N);
	}
	return 0;
}