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
	int row,col;
	scanf("%d %d",&row,&col);
	int *head=(int *)calloc(row*col,sizeof(int));
    int *p;
	for(p=head;p<head+row*col;p++)
	{
		scanf("%d",p);
	}
	int i,j,jj,ii;
	for(j=0;j<col;j++)
	{
		for(jj=j,i=0;jj>=0&&i<row;jj--,i++)
		{
			printf("%d\n",*(head+col*i+jj));
		}
	}
	for(i=1;i<row;i++)
	{
		for(ii=i,j=col-1;j>=0&&ii<row;j--,ii++)
		{
			printf("%d\n",*(head+col*ii+j));
		}
	}
	return 0;
}
