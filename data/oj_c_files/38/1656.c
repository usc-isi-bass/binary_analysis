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
	int n,i,j,a[100];
	double sz[100][100],sum[100],m[100],p[100],s[100];
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=0;
		for(j=0;j<a[i];j++)
		{
			scanf("%lf",&sz[i][j]);
			sum[i]+=sz[i][j]/a[i];
		}
			p[i]=0;
		for(j=0;j<a[i];j++)
			p[i]+=(sz[i][j]-sum[i])*(sz[i][j]-sum[i]);
		s[i]=sqrt(p[i]/a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%.5f\n",s[i]);
	}
	return 0;
}