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
	int n,i,x,m;
	scanf("%d",&n);
	x=n;
	for(i=1;i<=1000;i++)
	{
		if((x!=1)&&(x%2==1))
		{
			m=x*3+1;
			printf("%d*3+1=%d\n",x,m);
			x=m;
		}
		else if((x!=1)&&(x%2==0))
		{
			m=x/2;
			printf("%d/2=%d\n",x,m);
			x=m;
		}
		else if(x==1)
		{
			printf("End");
			break;
		}
	}
}
