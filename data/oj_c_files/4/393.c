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
	int col,row,a[100][100],i,j;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++) scanf("%d",&a[i][j]);
	}
	i=0;j=0;

	for(;;)
	{
		
			printf("%d\n",a[i][j]);
				if(i+j==row+col-2) break;
		if(j==0)
		{
			j=i+j+1;i=0;
		}
		 else if(i>=row-1)
		 {j=i+j+1;i=0;}
		 else 	{i++;j--;}
	
	if(j>col-1) {i=i+j+1-col;j=j-(j+1-col);}
	if(i+j==row+col-2) break;

	}
	if(row+col>2)
	printf("%d\n",a[i][j]);
	
}