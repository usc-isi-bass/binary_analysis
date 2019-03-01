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
	int i,n,e,j;
	double b=2,c,f,g=0,s[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=2;
		scanf("%d",&e);
		g=0;
		for(j=0;j<e;j++)
		{
			g=g+b;
			b=1+(1/b);
		}
		s[i]=g;
	}
	for(i=0;i<n;i++)
	{
		printf("%.3lf\n",s[i]);
	}
	return 0;
}