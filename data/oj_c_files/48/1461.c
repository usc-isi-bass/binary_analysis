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
	int n,m,a[9][9],i,j,z,b,c,d[9][9];
	scanf("%d%d",&m,&n);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			a[i][j]=0;
			d[i][j]=0;
		}
	}
	a[4][4]=m;
	d[4][4]=m;

	for(z=1;z<=n;z++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(a[i][j]!=0){
					for(b=i-1;b<=i+1;b++)
					{
						for(c=j-1;c<=j+1;c++)
						{
							d[b][c]+=a[i][j];
						}
					}
				}
			}
		}
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				a[i][j]=d[i][j];
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j==8){
				printf("%d\n",d[i][j]);
			}else{
				printf("%d ",d[i][j]);
			}
		}
	}
	return 0;
}
