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
	int a[5][5],i,j,p,n,m;
	int matrix(int b[5][5],int e,int f);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&n,&m);
	p=matrix(a,n,m);
	if(p==1)
	{
		for(i=0;i<5;i++)
		{
			j=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=j;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",a[i][j]);
				if(j!=4)
					printf(" ");
				else
					printf("\n");
			}
		}
	}
	else
		printf("error");
}

int matrix(int b[5][5],int e,int g)
{
	int f;
	if(e<5&&g<5)
		f=1;
	else
		f=0;
	return(f);
}