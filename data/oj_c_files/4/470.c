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
	int a[101][101],b[100000];
	int row,col;
	int i,j,k=(-1),sum;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	}
	for(sum=0;sum<=((row+col)-2);sum++)
	{
		for(i=0;i<row;i++)
		{
			if(sum-i>=0&&sum-i<col)
			{
				k+=1;
				b[k]=a[i][sum-i];
			}
		}
	}
	for(k=0;k<=row*col-1;k++)
		printf("%d\n",b[k]);




	return 0;


}
