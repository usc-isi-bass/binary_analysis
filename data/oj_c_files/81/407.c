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

int mn(int n,int m)
{
	if(n>=0&&n<=4&&m>=0&&m<=4)
		return 1;
	else
		return 0;
}
int main()
{
	int a,n,m,i,j,(*p)[5],b[5][5];
	for(i=0;i<5;i++)
	   for(j=0;j<5;j++)
		   scanf("%d",&b[i][j]);
	scanf("%d %d",&n,&m);
	a=mn(n,m);
	p=b;
	if(a==0)
		printf("error\n");
	else
		for(i=0;i<5;i++)
		{
			if(i!=m&&i!=n)
			{
				for(j=0;j<4;j++)
				printf("%d ",b[i][j]);
				printf("%d",b[i][4]);
				printf("\n");
			}
			else if(i==m)
			{
				for(j=0;j<4;j++)
			    printf("%d ",*(*(p+n)+j));
				printf("%d",*(*(p+n)+4));
				printf("\n");
			}
			else
			{
				for(j=0;j<4;j++)
			    printf("%d ",*(*(p+m)+j));
				printf("%d",*(*(p+m)+4));
				printf("\n");
			}
		}
}
