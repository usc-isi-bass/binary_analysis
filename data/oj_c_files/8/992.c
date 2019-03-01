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

void output(int c[],int m,int n)
{
	int i;
	printf("%d",c[1]);
	for(i=2;i<=n+m;i++)
		printf(" %d",c[i]);
}
void combine(int a[],int b[],int m,int n)
{
	int c[100];
	int i,j=1;
	for(i=1;i<=m;i++)
	{
		c[i]=a[i];
	}
	for(i=m+1;i<=n+m;i++,j++)
	{
		c[i]=b[j];
	}
	output(c,m,n);
}
void order(int a[],int b[],int m,int n)
{
	int i,j,temp;
	for(i=1;i<m;i++)
	{
		for(j=1;j<=m-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	combine(a,b,m,n);
}
void input(void)
{
	int i,a[100],b[100],m,n;
	scanf("%d %d",&m,&n);
	for(i=1;i<=m;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	order(a,b,m,n);
}
int main()
{
	input();
	return 0;
}