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
 int i,j,k,**p,col,row,sum;
 scanf("%d %d",&row,&col);
 p = (int **) malloc(row*sizeof(int*));
 for (i=0;i<row;i++)
    *(p+i)=(int *)malloc(col*sizeof(int));
 for(i=0;i<row;i++)
    for(j=0;j<col;j++)
	{
		scanf("%d ",*(p+i)+j);
    }
    k=row+col;
	for(sum=0;sum<=k;sum++)
	{
		for(i=0;i<=sum;i++)
		{
			j=sum-i;
			if(i<row&&j<col)
				printf("\n%d",*(*(p+i)+j));
		}
	}
}