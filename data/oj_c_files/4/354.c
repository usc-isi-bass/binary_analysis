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
	int a[100][100],col,row,i,j,k,min;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	for(j=0;j<col;j++)
	for(i=0,k=j;(k>=0&&i<row)==1;)
	{
		printf("%d\n",a[i][k]);
		i++;
		k--;
	}
	for(i=1;i<row;i++)
	for(j=col-1,k=i;(j>=0&&k<row)==1;)
	{
		printf("%d\n",a[k][j]);
		j--;
		k++;
	}	
}