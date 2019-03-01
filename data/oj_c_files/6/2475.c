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
	int k,i;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		int row,col,j,l,sum=0,num[100][100];
		scanf("%d %d",&col,&row);
		for(l=0;l<col;l++)
		{
			int *a=num[l];
			for(j=0;j<row;j++)
			{
				scanf("%d",a+j);
				if(l==0||l==col-1||j==0||j==row-1)
				{
					sum=sum+*(a+j);
				}
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}