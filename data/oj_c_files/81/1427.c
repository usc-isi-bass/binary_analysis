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

int jhsz(int sz[5][5],int m,int n);
int main()
{
	int sz[5][5],m,n,i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d ",&sz[i][j]);
		}
	}
	scanf("%d%d",&m,&n);

	sz[5][5]=jhsz(sz,m,n);

	return 0;
}

int jhsz(int sz[5][5],int m,int n)
{
    int i,j,jh[5];

	if(m>4||n>4){
		printf("error");
	}else
	{
		for(j=0;j<5;j++)
		{
			jh[j]=sz[m][j];
			sz[m][j]=sz[n][j];
			sz[n][j]=jh[j];
		}
		for(i=0;i<5;i++)
		{
		    for(j=0;j<4;j++)
			{
			    printf("%d ",sz[i][j]);
			}
			printf("%d\n",sz[i][4]);
		}
	}
	return sz[5][5];
}