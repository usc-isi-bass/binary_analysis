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
	int row,col;
	int a[100][100];
	int i,j,n,duijiaoxian;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{scanf("%d",&a[i][j]);}
	}
    duijiaoxian=row+col-2;
	for(n=0;n<=duijiaoxian;n++)
	{
		for(i=0;i<=n;i++)
		{
			if(0<=i && i<row && 0<=(n-i) && (n-i)<col)
			{printf("%d\n",a[i][n-i]);}
		}
	}
}