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
	int n,m;
	scanf("%d",&n);
	while(n>1)
	{
		if(n%2)
		{
			m=n*3+1;
			printf("%d*3+1=%d\n",n,m);
		}
		else
		{
			m=n/2;
			printf("%d/2=%d\n",n,m);
		}
		n=m;
	}
	printf("End");
}
