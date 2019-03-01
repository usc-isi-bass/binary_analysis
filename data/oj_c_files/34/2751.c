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
	int n,i,x;scanf("%d",&n);
	if(n!=1)
	for(i=0;;i++)
	{
		if(n%2==1)
		{
			x=n*3+1;
			printf("%d*3+1=%d\n",n,x);if(x==1)break;
			n=x;
		}
		else
		{
			x=n/2;
			printf("%d/2=%d\n",n,x);if(x==1)break;
			n=x;
		}
	}
	printf("End");
}
