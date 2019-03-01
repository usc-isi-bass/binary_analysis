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
	int n, i, x0, y0, x1, y1;
	int pixel;
	scanf("%d", &n);
	for(i=0; i<n*n; i++)
	{
		scanf("%d", &pixel);
		if (pixel == 0)
		{
			x0 = i/n;
			y0 = i%n;
			break;
		}
	}
	for (i=i+1; i<n*n; i++)
	{
		scanf("%d", &pixel);
		if (pixel == 0)
		{
			x1 = i/n;
			y1 = i%n;
		}

	}

	printf("%d\n", (x1-x0-1)*(y1-y0-1));

	return 0;
}
