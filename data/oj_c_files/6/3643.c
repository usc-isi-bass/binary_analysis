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
	int i,h1,l1,k,h,l,a[100][100],sum[100];
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		sum[i]=0;
		scanf("%d%d",&h,&l);
		for(h1=1;h1<=h;h1++)
			for(l1=1;l1<=l;l1++)
			{
				scanf("%d",&a[h1][l1]);
			}
		for(h1=1;h1<=h;h1++)
			sum[i]+=a[h1][1]+a[h1][l];
		for(l1=2;l1<=l-1;l1++)
			sum[i]+=a[1][l1]+a[h][l1];
	}
	for(i=1;i<=k;i++)
		printf("%d\n",sum[i]);
	return 0;
}