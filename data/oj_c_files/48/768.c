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
	int a[9][9]={0},b[9][9]={0};
	int m,n,i,j,k;
	scanf("%d%d",&m,&n);
	a[4][4]=m;
	for(k=0;k<n;k++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				b[i][j]+=2*a[i][j];
				b[i-1][j]+=a[i][j];
				b[i-1][j-1]+=a[i][j];
				b[i-1][j+1]+=a[i][j];
				b[i][j-1]+=a[i][j];
				b[i][j+1]+=a[i][j];
				b[i+1][j-1]+=a[i][j];
				b[i+1][j+1]+=a[i][j];
				b[i+1][j]+=a[i][j];
			}
		}
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				a[i][j]=b[i][j];
				b[i][j]=0;
			}
		}
	}
				for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(j==0)
				printf("%d",a[i][j]);
				else
					printf(" %d",a[i][j]);
			}
			printf("\n");
		}
				return 0;
}