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
	int bian,row,col;
	int shuzu[500][500];
	int i,j,m=0,n=0;
	int sum;

	scanf("%d",&bian);
	row=bian;
	col=bian;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&shuzu[i][j]);
		}
	}

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(shuzu[i][j]==0)
			{
				m+=1;
				break;
			}
		}
	}

	for(j=0;j<col;j++)
	{
		for(i=0;i<row;i++)
		{
			if(shuzu[i][j]==0)
			{
				n+=1;
				break;
			}
		}
	}

	sum=(m-2)*(n-2);
	printf("%d",sum);
	return 0;
}
