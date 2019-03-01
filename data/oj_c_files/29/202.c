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
	int m,i,n;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		int j=0,a=1,b=2,d;
		float c,sum=0;
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			c=(float)b/a;
			d=b;
			b+=a;
			a=d;
			sum+=c;
		}
			printf("%.3f\n",sum);
	}
	return 0;
}
