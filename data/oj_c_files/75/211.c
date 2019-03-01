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
	int a[1010]={0};
	int x[1010],y[1010];
	char c=',';
	int n=0;
	int i,j;
	i=1;
	while(c!=10)
	{
		scanf("%d%c",&x[i],&c);
		n++;
		i++;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d%c",&y[i],&c);
	}
	printf("%d ",n);
	for(i=1;i<=n;i++)
	{
		for(j=x[i];j<y[i];j++)
		{
			a[j]++;
		}
	}
	int max=0;
	for(i=0;i<1010;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("%d",max);
}