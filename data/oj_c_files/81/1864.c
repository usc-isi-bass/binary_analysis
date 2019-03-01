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
	int matrix[5][5],i,j,n,m;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&matrix[i][j]);
	scanf("%d%d",&n,&m);

	if(n<0||n>4||m<0||m>4)
		printf("error\n");
	else
	{
		for(i=0;i<5;i++)
			swap(matrix[n][i],matrix[m][i]);
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				printf("%d ",matrix[i][j]);
			printf("%d\n",matrix[i][4]);
		}
	}
	
	return 0;
}