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

int fenjie(int x,int k)
{
	int t=1,i;
	if(k>x)
	{
		return 0;
	}
	for(i=k;i<x;i++)
	{
		if(x%i==0)
		{
			t=t+fenjie(x/i,i);
		}
	}
	return t;
}
int main()
{
	int j,p,n,a[101];
	scanf("%d",&n);
	for(j=0;j<=n-1;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<=n-1;j++)
	{
		printf("%d",fenjie(a[j],2));
		printf("\n");
	}
	return 0;
}