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

main()
{
	int a[5][5],n,m,l,i,j;
	int swap(int a[][5],int,int);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	}
	scanf("%d%d",&m,&n);
	l=swap(a,m,n);
	if(l==0)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==0)
				printf("%d",a[i][j]);
				else
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	}
}

int swap(int a[][5],int x,int y)
{
	int z,j,m;
	if(x>=0&&x<5&&y>=0&&y<5)
	{
		z=1;
		for(j=0;j<5;j++)
		{
			m=a[x][j];
			a[x][j]=a[y][j];
			a[y][j]=m;
		}
	}
	else
		z=0;
	return(z);
}