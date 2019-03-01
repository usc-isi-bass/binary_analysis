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
    int sz[N][N];
	int row,col;
	scanf("%d%d",&row,&col);
	int i,j;
    for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	int sx=0,xx=row-1,zx=0,yx=col-1;
	while((sx<xx)&&(zx<yx))
	{
	    for(j=zx;j<yx;j++)
		{
		   printf("%d\n",sz[sx][j]);
		}
	    for(j=sx;j<xx;j++)
		{
		   printf("%d\n",sz[j][yx]);
		}
	    for(j=yx;j>zx;j--)
		{
		   printf("%d\n",sz[xx][j]);
		}
	    for(j=xx;j>sx;j--)
		{
		   printf("%d\n",sz[j][zx]);
		}
		sx++;;xx--;zx++;yx--;
	}
	if((sx==xx)&&(zx==yx))
	{
		printf("%d\n",sz[sx][zx]);
	} 
	if((sx==xx)&&(zx<yx))
	{
		for(i=zx;i<=yx;i++)
		{
			printf("%d\n",sz[sx][i]);
		}
	}
	if((sx<xx)&&(zx==yx))
	{
		for(i=sx;i<=xx;i++)
		{
			printf("%d\n",sz[i][zx]);
		}
	}
	return 0;
}
