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

void f(int a[],int n,int m,int i)
{
	if(i==n)
		return;
	int c,j;
	if(i<m)
		j=n-m+i;
	else
		j=i-m;
	c=a[j];
	f(a,n,m,i+1);
	a[i]=c;
	return;
}
void main()
{
	int a[100],n,m,i;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	f(a,n,m,0);
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[i]);
}