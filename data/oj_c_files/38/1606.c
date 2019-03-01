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
int q[100];
double a[200][1000],b[200]={0},sum[200]={0},s[200]={0};
int k,i,j;
scanf("%d",&k);
for(i=0;i<k;i++)
	{
		scanf("%d",&q[i]);
		for(j=0;j<q[i];j++)
		{
		scanf("%lf",&a[i][j]);
		s[i]+=a[i][j];
		}
	}
for(i=0;i<k;i++)
{
	for(j=0;j<q[i];j++)
	{
		b[i]+=(a[i][j]-s[i]/q[i])*(a[i][j]-s[i]/q[i]);
	}
}
for(i=0;i<k;i++)
{
	sum[i]=sqrt(b[i]/q[i]);
	printf("%.5lf\n",sum[i]);
}
return 0;
}