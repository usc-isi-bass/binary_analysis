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
	if(n<=1||n>=100)
	{
		return 0;
	}
	
	int temp;
	int max, lmax;
	scanf("%d", &max);
	scanf("%d", &lmax);
	if(lmax > max)
	{
		temp=lmax;
		lmax=max;
		max=temp;
	}
	
	int i=3;
	while(i<=n)
	{
		scanf("%d", &temp);
		if(temp>max)
		{
			lmax=max;
			max=temp;
		}
		else if(temp>lmax)
		{
			lmax=temp;
		}
		i++;
	}
	printf("%d\n", max);
	printf("%d", lmax);
	return 0;
}