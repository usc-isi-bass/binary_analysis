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
	int i,n,m,k;
	float s,a,b;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d",&n);
		a=1;
		b=1;
		s=0;
		for(k=1;k<=n;k++)
		{
			a=a+b;
			b=a-b;
			s=s+a/b;
		}
		printf("%.3lf\n",s);
	}
	
	return 0;
}