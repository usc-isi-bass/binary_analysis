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
	int a[100][100];
	int row,col;
	int i,j,k,l;

	scanf("%d%d",&row,&col);

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);

	for(j=0;j<col;j++)
	{
		k=0;
		l=j;
		while(k<row&&l>=0)
		{
			printf("%d\n",a[k][l]);
			k++;
			l--;
		}
	}
	for(i=1;i<row;i++)
	{
		k=i;
		l=col-1;
		while(k<row&&l>=0)
		{
			printf("%d\n",a[k][l]);
			k++;
			l--;
		}
	}

	
}