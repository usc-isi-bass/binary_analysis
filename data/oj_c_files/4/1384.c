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
	int a[100][100],n=0,row=0,col=0;
	scanf("%d %d",&row,&col);
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			scanf("%d",&(a[i][j]));
	n=row+col-1;
	for(int k=0;k<n;k++)
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
			{
				if(i+j==k)
					printf("%d\n",a[i][j]);
			}
	return 0;
}