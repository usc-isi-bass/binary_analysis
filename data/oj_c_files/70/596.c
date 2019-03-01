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
	int n, i, m, j, l, k;
	double a[100][2];
	double b[100][100];
	double dis=0;
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
		scanf ("%lf%lf", &a[i][0], &a[i][1]);
	}
	for (m=0; m<n; m++)
	{
		for (j=0; j<n; j++)
		{
			b[j][m]=sqrt((a[j][0]-a[m][0])*(a[j][0]-a[m][0])+(a[j][1]-a[m][1])*(a[j][1]-a[m][1]));
		}
	}
	for (l=0; l<n; l++)
	{
		for (k=0; k<n; k++)
		{
			if( b[k][l]>dis )
			{
				dis=b[k][l];
			}
		}
	}
	printf("%.4lf\n", dis);
	return 0;
}
