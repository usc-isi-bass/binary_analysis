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
	int m, n, i, j;
	int sum = 0;
	int cell[22][22]={0};

	scanf("%d%d", &m, &n);
	for(i = 1; i < m+1; i++)
	{
		for(j = 1; j < n+1; j++)
		{
			scanf("%d", &cell[i][j]);
		}
	}

	for(i = 1; i < m+1; i++)
	{
		for(j = 1; j < n+1; j++)
		{
			if(cell[i][j]-cell[i][j-1]>=0 && cell[i][j]-cell[i][j+1]>=0 && cell[i][j]-cell[i+1][j]>=0 && cell[i][j]-cell[i-1][j]>=0)
				printf("%d %d\n", i-1, j-1);
		}
	}

	return 0;
}