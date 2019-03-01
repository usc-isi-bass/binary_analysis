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
	int col,row,n,t,j,m,i,k,l;
	int a[101][101]={0},b[101][101]={0};
	scanf("%d %d",&row,&col);
	for (i=1;i<=row;i++)
		for (j=1;j<=col;j++)
			scanf("%d",&a[i][j]);
	for (i=1;i<=row;i++)
	{
		b[i][0]=1;
		b[i][col+1]=1;
	}
	for (j=1;j<=col;j++)
	{
		b[0][j]=1;
		b[row+1][j]=1;
	}
	m=0;i=1;j=1;
	while (m<col*row)
	{
		printf("%d\n",a[i][j]);
		m=m+1;
		b[i][j]=1;
		if (b[i-1][j]==1)
		{
			if (b[i][j-1]==1)
			{
				if (b[i][j+1]==0)
					j++;
				else
					i++;
			}
			else 
				if (b[i+1][j]==0)
					i++;
				else
					j--;
		}
		else
			if (b[i][j-1]==0)
				j--;
			else
				i--;
	}
return 0;
}