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

void xunhuan(int a[100],int n,int m)
{
	int i,j,t,temp;
	for(j=0;j<m;j++)
	{
		temp=a[0];
		a[0]=a[n-1];
		for(i=0;i<n-1;i++)
		{
			t=a[i+1];
			a[i+1]=temp;
			temp=t;
		}
	}
}
int main()
{
	int a[100],n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	xunhuan(a,n,m);
	printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		printf(" %d",a[i]);
	}
}