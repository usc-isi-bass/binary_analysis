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
	int sz[100][100];
	int row, col, i, j;
	int startrow = 0 , startcol = 0;

	scanf("%d %d",&row, &col);
	for(i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			scanf("%d", &sz[i][j]);
		}
	}
	while((startcol + startrow) != (row + col - 2))
	{
		if(startcol < col - 1)
		{
			for(i = startrow; (i < row) && (i <= startrow + startcol); i++)
			{
				printf("%d\n",sz[i][startcol + startrow - i]);
			}
			startcol++;
		}
		else
		{
			for(i = startrow; (i < row) && (i <= startrow + startcol); i++)
			{
				printf("%d\n",sz[i][startcol + startrow - i]);
			}
			startrow++;
		}
	}
	printf("%d",sz[row - 1][col - 1]);
	return 0;
}