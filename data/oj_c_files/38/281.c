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
	int k,n,i,j;
	double a[150],b=0,c,e,f,g,S;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		
		scanf("%d",&n);
		b=0;
		f=0;
		for(j=1;j<=n;j++)
		{
			scanf("%lf",&a[j]);
			b=b+a[j];
		}
		c=b/n;
		for(j=1;j<=n;j++)
		{
			e=(a[j]-c)*(a[j]-c);
			f=f+e;
		}
		g=f/n;
		S=sqrt(g);
	    printf("%.5lf\n",S);

	}


	return 0;
}

