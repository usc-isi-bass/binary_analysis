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





int g[100][100];


int main()
{
	int r,c;
	scanf("%d%d",&r,&c);

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			scanf("%d",g[i]+j);

	for(int j=0;j<r+c-1;j++)
	{
		for(int i=0;i<r;i++)
		{
			if(j-i>=0 && j-i<c)
				printf("%d\n",g[i][j-i]);
		}
	}

	return 0;
}


