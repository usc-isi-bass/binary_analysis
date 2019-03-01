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
	int m,i;
	scanf("%d",&m);
    
	for(i=0;i<m;i++)
	{
		int n,j;
		double x[100],*p,S=0,a=0;
		p=&x[0];
		scanf("%d",&n);
		
		for(j=0;j<n;j++)
		{
			scanf("%lf ",p+j);
		}

        for(j=0;j<n;j++)
		{
			a+=*(p+j);
		}

		a=a/n;

		for(j=0;j<n;j++)
		{
			S+=(*(p+j)-a)*(*(p+j)-a);
		}

		S=S/n;
		S=pow(S,0.5);
		printf("%.5lf\n",S);
	}
	return 0;
}
