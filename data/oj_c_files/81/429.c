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
	int a[5][5];
	int i,y;
	int *p;
	int *pa[5];
	int fun(int *pa[]);
	for(i=0;i<5;i++)
	{
		pa[i]=a[i];
		for(p=a[i];p<a[i]+5;p++)
			scanf("%d",p);
	}
	y=fun(pa);
	if(y==0)
		printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			for(p=pa[i];p<pa[i]+5;p++)
				printf("%d%c",*p,(p-pa[i]==4)?'\n':' ');
			printf("\n");
		}
	}
	return 0;
}
int fun(int *pa[])
{
	int n,m;
	int *i;
	scanf("%d %d",&n,&m);
	if(n>4||m>4)
		return 0;
	else
	{
		i=pa[n];
		pa[n]=pa[m];
		pa[m]=i;
		return 1;
	}
}