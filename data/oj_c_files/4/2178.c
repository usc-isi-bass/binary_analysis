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
	int a[100][100];
	int row,col,i,j,k;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<col;i++)   /*????????????*/
	{	
		for(j=i,k=0;j>=0,k<=i;j--,k++)  
		{
			if(k>(row-1)||j>(col-1)||k<0||j<0)    /*??????*/
				continue;
			printf("%d\n",a[k][j]);
		}
	}
	for(i=1;i<=row-1;i++)    /*????????????*/
		for(j=col-1,k=i;j>=0,k<=row-1;j--,k++)
		{
			if(k>(row-1)||j>(col-1)||k<0||j<0)  /*??????*/
				continue;
			printf("%d\n",a[k][j]);
		}
	return 0;
}
