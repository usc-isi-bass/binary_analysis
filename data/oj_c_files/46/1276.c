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
	int col,row,sz[100][100],i,j,m=0,k;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	if(col<=row)
	{
	 for(k=1;2*k<col+1;k++)
	 {
		   for(j=k-1;j<col-k;j++)
		   {
		    	 printf("%d\n",sz[k-1][j]);
			     m++;	
		   }
		   for(i=k-1;i<row-k;i++)
		   {
		    	 printf("%d\n",sz[i][col-k]);
			     m++;	
		   }
		   for(j=col-k;j>k-1;j--)
		   {
		    	 printf("%d\n",sz[row-k][j]);
			     m++;	
		   }
		   for(i=row-k;i>k-1;i--)
		   {
		       	printf("%d\n",sz[i][k-1]);
			    m++;
		   }
	 }
	 for(i=k-1;i<row,m<row*col;i++,m++)
	 {
		 printf("%d\n",sz[i][k-1]);
	 }
	}
	else
	{
       for(k=1;2*k<row+1;k++)
	   {
		   for(j=k-1;j<col-k;j++)
		   {
		    	 printf("%d\n",sz[k-1][j]);
			     m++;	
		   }
		   for(i=k-1;i<row-k;i++)
		   {
		    	 printf("%d\n",sz[i][col-k]);
			     m++;	
		   }
		   for(j=col-k;j>k-1;j--)
		   {
		    	 printf("%d\n",sz[row-k][j]);
			     m++;	
		   }
		   for(i=row-k;i>k-1;i--)
		   {
		       	printf("%d\n",sz[i][k-1]);
			    m++;
		   }
	   }
	   for(j=k-1;j<col-k,m<row*col;j++,m++)
	   {
	     	 printf("%d\n",sz[k-1][j]);
	   }
	}
	return 0;
}