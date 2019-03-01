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

void main(void)
{
	int k, a[25] ,i ,j ,max ,b[25] = {1};
	scanf("%d",&k);
	for(i = 0;i < k;i ++)
	{
		scanf("%d",&a[i]);
	}
	for(i = 1;i < k;i ++)
	{
		max = 1;
		for(j = 0;j < i;j ++)
		{
			if(a[j] >= a[i] && b[j] + 1 >= max)
				max = b[j] + 1;
		}
		b[i] = max;
	}
	max = 0;
	for(i = 0;i < k;i ++)
	{
		if(b[i] > max)
			max = b[i];
	}
	printf("%d",max);
}