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



int main(int argc, char* argv[])
{
	int n,m,i,j;
	double x[100],s,a,sum;

	scanf("%d",&n);

	for(j=0;j<n;j++)
	{
		s=0;
		sum=0;
		scanf("%d",&m);
		for(i=0;i<m;i++)
			scanf("%lf",&x[i]);
		for(i=0;i<m;i++)
			sum+=x[i];
		a=sum/m;

		for(i=0;i<m;i++)
		{
			s+=(x[i]-a)*(x[i]-a);
		}
		s=s/m;
		s=sqrt(s);
		printf("%.5lf\n",s);
		
	}

	return 0;
}