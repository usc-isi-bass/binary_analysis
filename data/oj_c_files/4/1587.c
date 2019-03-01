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

	int *a,i,j,row,col;
	scanf("%d %d",&row,&col);
	a=(int*)calloc(200,200*sizeof(int));
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",a+i*col+j);
	}
	for(j=0;j<col;j++)
	{
		for(i=1;(i<row+1)&&(i<=j+1);i++)
		printf("%d\n",*(a+(i-1)*col+j+1-i));
	}
	for(i=1;i<row;i++)
	{
		for(j=1;(j<=col)&&(j<row+1-i);j++)
		
				printf("%d\n",*(a+(i+j-1)*col+col-j));
	}
}
