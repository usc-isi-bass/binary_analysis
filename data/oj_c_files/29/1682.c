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
	int a,n,i,m,b,c;
	float sum;
	scanf("%d\n",&m);
	for(i=1;i<=m;i++)
	{	
		scanf("%d\n",&n);
		sum=0;
		b=1;
		c=1;
		for(a=1;a<=n;a++)
		{	
			b=b+c;
			c=b-c;
			sum=sum+(double)(b)/(double)(c);
		}
		printf("%.3f\n",sum);
	}
	return 0;
}