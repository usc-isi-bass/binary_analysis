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
	int mat[100][100];
	int i,j,row,col;
	int m=0,n=0;
	int count=0;

	scanf("%d%d",&row,&col);
    
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			mat[i][j]=-1;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&mat[i][j]);
	for(;;)
	{
		for(;;)
		{
			printf("%d\n",mat[m][n]);
			count++;
			mat[m][n]=-1;
			n++;
			if(mat[m][n]==-1)
			{
				n--;
				m++;
				break;
			}
		}
		if(count>=row*col)break;
		for(;;)
		{
			printf("%d\n",mat[m][n]);
			count++;
			mat[m][n]=-1;
			m++;
			if(mat[m][n]==-1)
			{
				m--;
				n--;
				break;
			}
		}
		if(count>=row*col)break;
		for(;;)
		{
			printf("%d\n",mat[m][n]);
			count++;
			mat[m][n]=-1;
			n--;
			if(mat[m][n]==-1)
			{
				n++;
				m--;
				break;
			}
		}
		if(count>=row*col)break;
		for(;;)
		{
			printf("%d\n",mat[m][n]);
			count++;
			mat[m][n]=-1;
			m--;
			if(mat[m][n]==-1)
			{
				m++;
				n++;
				break;
			}
		}
		if(count>=row*col)break;
	}
	return 0;
}