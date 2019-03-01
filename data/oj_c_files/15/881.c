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
	int n;
	scanf("%d",&n);
	int sz[ROW][COL];
	int x1,y1,x2,y2;
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=n;col++)
		{
			scanf("%d",&sz[row][col]);
		}
	}
	for(int row=1;row<=n;row++)
	{
		for(int col=1;col<=n;col++)
		{
			if(sz[row][col]==0)
			{
				x1=row;
				y1=col;
			}
		}
	}
	for(int row=n;row>0;row--)
	{
		for(int col=n;col>0;col--)
		{
			if(sz[row][col]==0)
			{
				x2=row;
				y2=col;
			}
		}
	}
	int s;
	s=(x2-x1+1)*(y2-y1+1);
	printf("%d",s);
	return 0;
}