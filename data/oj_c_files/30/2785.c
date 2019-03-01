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
	int n;
	int a=0;
	int i=1;
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if (i%7==0)
		{
			continue;
		}
	    if((i-7)%10==0)
		{
			continue;
		}
		if(i/10==7)
		{
			continue;
		}
			a=a+i*i;
	}
	printf("%d", a);
	return 0;
}
