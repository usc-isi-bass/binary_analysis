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
	int *p[100][100];
	int n, i, j, row, col;
	scanf ("%d %d", &row, &col);
	for (i=0; i<100; i++)
		for (j=0; j<100; j++)
			*(*(p+i)+j)=(int *)malloc(LEN);
	for (i=1; i<=row; i++)
		for (j=1; j<=col; j++)
			scanf ("%d", *(*(p+i)+j));
		//printf ("%d", *(*(p+i)+j));}
	for (j=1; j<=col; j++)
	{
		int h=1, l=j;
		while (l>=1 && h<=row)
		{ printf ("%d\n", **(*(p+h)+l));
		h++; l--;}
	}
	for (i=2; i<=row; i++)
	{
		int l=col, h=i;
		while (l>=1 && h<= row)
		{ printf ("%d\n", **(*(p+h)+l));
		h++; l--;}
	}
	return 0;
}