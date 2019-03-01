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
	int n,a,e,x=0,y=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(x<y)
		{
			e=y;
			y=x;
			x=e;
		}
		if(a>x)
		{
			y=x;
			x=a;
			
		}
		if(a<x&&a>y)
		{
			y=a;
		}
	}
	printf("%d\n",x);
	printf("%d\n",y);
	return 0;
}
