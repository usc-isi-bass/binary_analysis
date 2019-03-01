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
	int a[100][100],i,j,i1,j1;
	scanf("%d%d",&i,&j);
	for(i1=1;i1<=i;i1++)
	{
		for(j1=1;j1<=j;j1++)
		{
			scanf("%d",&a[i1][j1]);
		}
	}
	j1=1;
	i1=1;
	printf("%d",a[1][1]);
	while(j1!=j||i1!=i)
	{
		i1=i1+1;
		j1=j1-1;
		if(j1==0)
		{
			j1=i1;
			i1=1;
		}
		if(j1>j||i1>i) continue;
		printf("\n%d",a[i1][j1]);
	}
	return 0;
}