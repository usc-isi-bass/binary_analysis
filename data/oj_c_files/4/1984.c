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
	int row,col,k,i,j;
	int a[100][100]={{0},{0}};
	scanf("%d%d",&row,&col);
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
		for(k=0;k<row+col-1;)
		{
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
				if(i+j==k)
				{
					printf("%d\n",a[i][j]);
				}
				}
			}
		k++;
		}
}

