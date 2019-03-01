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
	int n, a[100], t1, t2, t3, t4, sum, i;

	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);

	t1 = 0;
	t2 = 0;
	t3 = 0;
	t4 = 0;
	sum = 0;
	for(i=0; i<n; i++)
	{
		if(a[i]>=1 && a[i]<=18)
		{
			t1++;
			sum++;
		}
		else if(a[i]<=35)
		{
			t2++;
			sum++;
		}
		else if(a[i]<=60)
		{
			t3++;
			sum++;
		}
		else
		{
			t4++;
			sum++;
		}
	}
	printf("1-18: %.2f%%\n", (float)t1/sum*100);
	printf("19-35: %.2f%%\n", (float)t2/sum*100);
	printf("36-60: %.2f%%\n", (float)t3/sum*100);
	printf("60??: %.2f%%\n", (float)t4/sum*100);
}