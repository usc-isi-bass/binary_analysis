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
	int n,i,j;
	double b,a,B,A;
	int sz[200];
	double x[200],s[200];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(sz[i]));
		A=0;
		for(j=0;j<(sz[i]);j++)
		{
			scanf("%lf",&(x[j]));
			A+=x[j];
			
		}a=A/sz[i];//printf("%lf",a);
		B=0;
		for(j=0;j<sz[i];j++)
		{
			
			B+=(x[j]-a)*(x[j]-a);//printf("%lf",B);
		
		}	b=B/sz[i];//printf("%lf",b);
		s[i]=sqrt(b);
	}
	for(i=0;i<n;i++)
	{
		printf("%.5lf\n",s[i]);
	}
return 0;
}
