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
	int row,col,i,j,m,p;
	scanf("%d %d",&row,&col);
	int a[100][100];
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
		scanf("\n");
	}


	for (m=0;m<=col+row-2;m++)
	{
		if (m<col)
		{
			for(p=0;p<=row-1&&p<=m;p++)
			{
			
			printf("%d\n",a[p][m-p]);
			}
		}
		
	
		if (m>=col)
		{
			for(p=m-col+1;p<=m&&p<=row-1;p++)
			{
			
			printf("%d\n",a[p][m-p]);
			}
		}

	}

	return 0;
}
	