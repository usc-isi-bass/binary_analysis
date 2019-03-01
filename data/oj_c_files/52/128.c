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


int main ()
{
	int x[20];
	int *p;
	int n, m, i, j;
	scanf ("%d %d", &n, &m);
	p = (int *) malloc (sizeof (int) * n);
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &x[i]);
	}
	j = 0;
	for (i = n - m ; i < n; i++)
	{
		*(p + j) = x[i];
        j++;
	}
	j = m;
	for (i = 0; i < n - m ; i++)
	{
		*(p + j) = x[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf ("%d ", *(p + i));
		}
		else 
		{
			printf ("%d\n", *(p + i));
		}
	}
	free(p);
	return 0;
}