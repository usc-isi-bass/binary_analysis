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
	int a[100][100], i, j, m, n, row, col;
    scanf("%d%d",&row,&col);
	for(i=0;i<=row-1;i++)
		for(j=0;j<=col-1;j++)
			scanf("%d",&a[i][j]);
		m=row+col-2;
		for(n=0;n<=m;n++)
			for(i=0;i<=row-1;i++)
				for(j=0;j<=col-1;j++)
					if(i+j==n)
						printf("%d\n",a[i][j]);
			
}