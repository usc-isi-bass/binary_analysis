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
	int sz[ROW][COL];
	int nr,nc;
	int i,j,k;
	int Rm[ROW];
	int Cm[COL];
	int exist=0;
	scanf("%d,%d",&nr,&nc);
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<nr;i++)
	{
		Rm[i]=sz[i][0];
		for(j=0;j<nc;j++)
		{
			if(sz[i][j]>Rm[i])
			{
				Rm[i]=sz[i][j];
			}	
		}
	}
	for(j=0;j<nc;j++)
	{
		Cm[j]=sz[0][j];
		for(i=0;i<nr;i++)
		{
			if(sz[i][j]<Cm[j])
			{
				Cm[j]=sz[i][j];
			}
		}
	}
	for(i=0;i<nr;i++)
	{
		for(j=0;j<nc;j++)
		{
			if(Rm[i]==Cm[j])
			{
				printf("%d+%d",i,j);
				exist=exist+1;
			}
		}
	}
	if(exist==0)
	{
		printf("No");
	}
	return 0;
}

