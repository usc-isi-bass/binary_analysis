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
	int k,i,j,n[1000];
	double x[1000][1000],s[1000],a[1000];
	scanf("%d",&k);
    for(i=0;i<k;i++)
	{  
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%lf",&x[i][j]);
			a[i]=a[i]+x[i][j];
		}
	}
	for(i=0;i<k;i++)
	{
		a[i]=a[i]/n[i];
		for(j=0;j<n[i];j++)
		{
			s[i]=s[i]+(x[i][j]-a[i])*(x[i][j]-a[i]);
		}
		s[i]=sqrt(s[i]/n[i]);
		printf("%.5lf\n",s[i]);
	}
return 0;
}