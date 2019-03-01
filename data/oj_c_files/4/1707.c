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
	int a[MAXSIZE][MAXSIZE],i,j,row,col,n;
    scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
    }
	for(n=0;n<=col+row-2;n++)
	{
		for(i=0;i<row;i++)
			if(i<=n&&i>n-col)
			printf("%d\n",a[i][n-i]);
	}
}