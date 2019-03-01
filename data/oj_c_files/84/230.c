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

void main()
{
	int n,a,b,c,max,smax,i,r,t;
	scanf("%d",&n);
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b)
	{
		t=b;
        b=a;
		a=t;
	}
	max=a;
	smax=b;
	for(i=1;i<=n-2;i++)
	{
		scanf("%d",&c);
		if(c>max)
		{
			r=max;
			max=c;
			smax=r;
		}
		else if(c>smax)
		{
		    smax=c;
		}
	}
	printf("%d\n",max);
	printf("%d\n",smax);
}

