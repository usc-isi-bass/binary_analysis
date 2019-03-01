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

int n,m;
int a[5][5];
void swap()
{
	int tmp=0,i;
	for(i=1;i<=5;i++)
	{
	tmp=a[n][i-1];
	a[n][i-1]=a[m][i-1];
	a[m][i-1]=tmp;
	}
}
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			scanf("%d",&a[i-1][j-1]);
		scanf("%d%d",&n,&m);
		if(n>=0&&n<=4&&m>=0&&m<=4) swap();
		else 
		{printf("error");
		return 0;
		}
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			if(j!=5)
			printf("%d ",a[i-1][j-1]);
			else 	printf("%d\n",a[i-1][j-1]);

	return 0;
}