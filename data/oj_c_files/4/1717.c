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

int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
main()
{
	int a[100][100];
	int row,col,i,j,k,l;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<col;i++)
	{
		for(j=0;j<min(i+1,row);j++)
		{
		printf("%d\n",a[j][i-j]);
		}
	}	
	for(k=1;k<row;k++)
	{
          for(l=0;l<min(row-k,col);l++)
		  printf("%d\n",a[k+l][col-1-l]);
	}
}