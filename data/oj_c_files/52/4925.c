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

void swap(int a[],int j);
int main()
{
	int i,j,m,n,a[101];
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=m;i++)
	{
		for(j=n;j>1;j--)
		{
			swap(a,j);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(i==1) printf("%d",a[i]);
		else printf(" %d",a[i]);
	}
}
void swap(int a[],int j)
{
	a[j]=a[j]-a[j-1];
	a[j-1]=a[j]+a[j-1];
	a[j]=a[j-1]-a[j];
}
