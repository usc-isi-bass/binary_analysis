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
	int n, k, total, left, i, x=1;
	scanf("%d %d", &n, &k);
	total=n+k;
	for( ; ; total++)
	{
		left=total;
		i=1;
		while(i<=n)
		{
			i++;
			if(left%n==k&&left>=n+k)
				left=(left-k)*(n-1)/n;
			else left=0;
		}
		if(left/(n-1)>=1) break;
	}
	printf("%d\n", total);
}