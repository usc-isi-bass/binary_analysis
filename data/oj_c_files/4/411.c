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
	int a[1000][1000];
	int row, col, i, j, k;
	for(i=0;i<1000;i++)
		for(j=0;j<1000;j++)
			a[i][j]=-12345;
		scanf("%d%d", &row, &col);
		for(i=0;i<row;i++)
			for(j=0;j<col;j++)
				scanf("%d", &a[i][j]);
			for(j=0;j<1000;j++)
				for(k=j,i=0;k>=0;k--,i++)
				{
					if(a[i][k]!=-12345)
					printf("%d\n", a[i][k]);
				}


				
	
			
			return 0;
			
			
			
}