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
	int m,a,b,i,x,e,c,d;
	scanf("%d",&m);
	x=m*m;
	for(i=1;i<=x;i++)
	{
		scanf("%d",&e);
		if(e==0)
		{
			a=i;
			break;
		}
	}
	for(i=a+1;i<=x;i++)
	{
		scanf("%d",&e);
		if(e==0)
		{
			b=i;
		}
	}
	c=a%m;
	d=b%m;
	c=d-c-1;
	a=a/m;
	b=b/m;
	d=b-a-1;
	printf("%d",c*d);
	return 0;
}