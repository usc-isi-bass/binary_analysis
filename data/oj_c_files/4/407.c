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

int array[100][100];
int main()
{
	int row,col,i,j,m;
	scanf("%d%d\n",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&array[i][j]);
	}
	for(m=0;m<row+col-1;m++)
	{
		if(m<col)
		{
		for(i=0;i<=m&&i<row;i++)
			printf("%d\n",array[i][m-i]);
		}
		else
		{for(j=col-1;j>m-row&&j>=0;j--)
				printf("%d\n",array[m-j][j]);
		}

	}
	return 0;
}

