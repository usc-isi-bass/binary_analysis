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
	int i,j,jz[8][8],ROW,COL,max,min,q,p,m,n,flag=0;
	scanf("%d,%d",&ROW,&COL);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&jz[i][j]);
		}
	}
	for(i=0;i<ROW;i++)
	{
		q=0,p=0;
		max=jz[i][0];
		for(j=1;j<COL;j++)
		{
			if(jz[i][j]>max)
			{
				max=jz[i][j];
				q=j;
			}
		}
		min=jz[0][q];
		for(m=q,n=0;n<ROW;n++)
		{
			if(jz[n][m]<min)
			{
				min=jz[n][m];
				p=n;
			}


		}
		if(max==min)
		{
			flag=1;
			printf("%d+%d",p,q);
        }
	
	}
	if(flag==0)
		printf("No");
	return 0;
}