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
	int sz[5][5],x,y,i,j,a=0;
	for(x=0;x<5;x++) for(y=0;y<5;y++) scanf("%d",&sz[x][y]);
	for(x=0;x<5;x++) for(y=0;y<5;y++)
	{
		for(j=0;j<5;j++) if(sz[x][y]<sz[x][j]) break;
		if(j==5) for(i=0;i<5;i++) if(sz[x][y]>sz[i][y]) break;
		if(i==5)
		{
			a=1;
			printf("%d %d %d\n",x+1,y+1,sz[x][y]);
			i=0;
			j=0;
		}
	}
	if(a==0) printf("not found");
	return 0;
}
