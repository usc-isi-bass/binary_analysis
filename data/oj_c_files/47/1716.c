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

void f(int *x,int n)
{
	int *p,temp,*i,*j,m=(n-1)/2;
	i=x;
	j=x+n-1;
	p=x+m;
	for(;i<=p;i++,j--)
	{
		temp=*i;
		*i=*j;
		*j=temp;
	}
	return;
}
int main()
{
	int n,i,a[100];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	f(a,n);
	for(i=0;i<n;i++)
	{   
		if(i==0)
		printf("%d",a[i]);
		else
		printf(" %d",a[i]);
	}
	return 0;
}