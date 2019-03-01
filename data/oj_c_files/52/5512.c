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

void yidong(int a1[],int len)
{
	int j,temp;
	for(j=1;j<len;j++)
	{
		temp=a1[j];
		a1[j]=a1[0];
		a1[0]=temp;

	
	}

	return;
}
int main()
{
	int n,m,i;
	int a[1000];
	scanf("%d %d",&n,&m);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		yidong(a,n);
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++)
		printf(" %d",a[i]);
	return 0;
}