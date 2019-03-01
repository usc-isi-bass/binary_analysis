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
	int m,i=1,n,t,x;
	double s,j,r;
	scanf("%d",&m);
	while(i<=m)
	{
		scanf("%d",&n);
		for(j=1,r=2,t=1,s=0;t<=n;t++)
		{
            s=s+r/j;
			x=j+r;
			j=r;
			r=x;
		}
		printf("%.3lf\n",s);
                  i=i+1;
	}
		return 0;
	}


