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
	int row,col,i,j,k,(*a)[100];
	a=(int (*)[100])calloc(100,100*sizeof(int));     /*???pass?????????????????pass???*/
	scanf("%d%d",&row,&col);
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
				scanf("%d",*(a+i)+j);
		
	for(k=0;k<col;k++)
	{
		for(i=0;k-i>=0&&i<=row-1;i++)
			printf("%d\n",*(*(a+i)+k-i));
	}
	for(k=1;k<row;k++)
	{
		for(i=0;k+i<=row-1&&col-1-i>=0;i++)
			printf("%d\n",*(*(a+k+i)+col-1-i));
	}
}
