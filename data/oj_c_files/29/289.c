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
	int i,j,m,n,a[1000],b[1000];
    double t[1000],sum[100]={0.0};
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		b[0]=1;
        a[1]=1,b[1]=2;
		scanf("%d",&n);
		if(n>=2)
		{
			for(j=2;j<=n;j++)
			{
			   a[j]=b[j-1];
			   b[j]=b[j-1]+b[j-2];
			   t[j]=1.0*b[j]/a[j];
			   sum[i]+=t[j];
			}
			sum[i]=sum[i]+2.000;
		}
		else 
		{
			sum[i]=2.000;
		}
	}
    for(i=0;i<m;i++)
	{
		printf("%.3lf\n",sum[i]);
	}
	return 0;
}