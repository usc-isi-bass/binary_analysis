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
	int*p;
	int row,col,i,j;
	scanf("%d %d",&row,&col);
	p=(int*)malloc(row*col*sizeof(int));
	for(i=0;i<row*col;i++)
	{
		scanf("%d",p+i);
	}
	for(i=1;i<=col;i++)
	{
		j=i;
		while((col!=1)&&(j%col!=1)&&(j+col-1<row*col))
		{
			printf("%d\n",*(p+j-1));	
			j=j+col-1;
		}
		printf("%d\n",*(p+j-1));
	}
	for(i=2;i<=row;i++)
	{ 
		j=i*col;
		while((col!=1)&&(j%col!=1)&&(j+col-1<row*col))
		{
			printf("%d\n",*(p+j-1));
			j=j+col-1;
		}
		printf("%d\n",*(p+j-1));
	}
}
