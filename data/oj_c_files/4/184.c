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

void main()
{
	int a[100][100],i,j,k,l,m,n,col,row;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(col>=row)
	{  
	  for(k=0;k<col;k++)
	  {
		  for(l=0;l<row&&l<=k;l++)
		  {
			  printf("%d\n",a[l][k-l]);
		  }
	  }
	  for(m=1;m<row;m++)
	  {
		  for(n=0;n<row-m;n++)
			  printf("%d\n",a[m+n][col-1-n]);
	  }
	}
	else
	{
		for(k=0;k<col;k++)
	  {
		  for(l=0;l<row&&l<=k;l++)
		  {
			  printf("%d\n",a[l][k-l]);
		  }
	  }
		for(m=1;m<row;m++)
		{
			for(n=0;n<row-m&&n<col;n++)
				printf("%d\n",a[m+n][col-1-n]);
		}
	}
}