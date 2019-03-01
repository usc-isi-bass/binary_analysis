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
	int i;
	char c;
	int k;
	int a[1001],b[1001];
    k=1;
	scanf("%d",&a[k]);
	while((c=getchar())==',')
	{
		k++;
		scanf("%d",&a[k]);
	}
	k=1;
	scanf("%d",&b[k]);
	while((c=getchar())==',')
	{
		k++;
		scanf("%d",&b[k]);
	}
	printf("%d ",k);
	int t=0;
	for (i=0;i<=1000;i++)
	{
		int j;
		int sum=0;
		for (j=1;j<=k;j++)
			if (a[j]<=i && b[j]>i)
				sum++;
		if (t<sum)
			t=sum;
	}
	printf("%d",t);
}
