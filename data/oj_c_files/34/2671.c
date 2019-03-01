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
	int n,i,j,a,b;
	scanf("%d",&n);
	a=n;
	for(i=0;a!=1;i++)
	{
		if(a%2!=0)
		{
			b=a*3+1;
			printf("%d*3+1=%d\n",a,b);
			a=b;
		}
		else
		{
			b=a/2;
			printf("%d/2=%d\n",a,b);
			a=b;
		}
	}
	printf("End");
}