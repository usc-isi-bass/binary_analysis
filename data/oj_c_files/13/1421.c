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
	int a[101]={0};
	int n,b[20001],i,j=0,c[20001];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(a[b[i]]==0)
		{
			j++;
			c[j]=b[i];
			a[b[i]]=1;
		}
	}
	for(i=1;i<=j;i++)
	{
		printf("%d",c[i]);
		if(i!=j)
			printf(" ");
	}
	return 0;
}