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


int product(int n,int m)
{
	int z;
	if(n>=0&&n<=4&&m>=0&&m<=4)z=1;
	else z=0;
	return z;
}
void main()
{
	int product(int n,int m);
	int t[5],a[5][5],x,y;
	int i,j,k;
	for (i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d%d",&x,&y);
		k=product(x,y);
		if(k==0)printf("error");
		else 
		{
			for(j=0;j<5;j++)
			{
				t[j]=a[x][j];
				a[x][j]=a[y][j];
				a[y][j]=t[j];
			}

		for(i=0;i<5;i++)
		{
			printf("%d",a[i][0]);
			for(j=1;j<5;j++)
				printf(" %d",a[i][j]);
			printf("\n");
		}
		}
}