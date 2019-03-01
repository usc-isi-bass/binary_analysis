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
	scanf("%d", &n);
	int max;
	scanf("%d", &max);
	int lmax;
	scanf("%d", &lmax);
	if(max<lmax)
	{
		max=lmax;
		lmax=max;
	}
    int a;
	int i;
	for(i=0;i<(n-2);i++)
	{
		scanf("%d", &a);
	    if(a>max)
		{
			lmax=max;
		     max=a;
		}
	    else if(a>lmax)
		{
		     lmax=a;
		}
	}
	printf("%d\n", max);
	printf("%d", lmax);
	return 0;
}