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
	int n, input, output;
	int num[300];
	int i, j;
	scanf("%d", &n);
	scanf("%d", &num[0]);
	printf("%d", num[0]);
	for (i=1; i<n; i++)
	{
		scanf("%d", &num[i]);
		output=1;
		for (j=0; j<i; j++)
		{
			if (num[j]==num[i])
			{
				output=0;
			}
		}
		if (output==1)
		{
			printf(",%d",num[i]);
		}
	}
}
