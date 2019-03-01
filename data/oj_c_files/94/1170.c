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

int main(int argc, char* argv[])
{
	int n, i, j=0, k;
	int* piInput, *piOdd;

	scanf("%d", &n);

	piInput = (int*)calloc(n, sizeof(int));
	piOdd = (int*)calloc(n, sizeof(int));

	for (i=0; i<n; i++)
	{
		scanf("%d", &piInput[i]);
		if (piInput[i] %2 ==1)
		{
			piOdd[j++] = piInput[i];
		}
	}

	///sort
	for (i=0; i<j; i++)
	{
		for (k=i+1; k<j; k++)
		{
			if (piOdd[i]> piOdd [k])
			{
				n= piOdd[i];
				piOdd[i] = piOdd[k];
				piOdd[k]=n;
			}
		}
	}
	///print
	i=0;
	printf("%d", piOdd[i]);
	for (i=1; i<j; i++)
	{
			printf(",%d", piOdd[i]);
	}
	free(piInput);
	free(piOdd);

	return 0;
}
