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

int pai(int a[],int n,int k);
int main()
{
	int n,i,k;
	int a[100];
	scanf("%d%d",&n,&k);
	for(i=0;i<=(n-1);i++)
	{
		scanf("%d",&a[i]);
	}
	pai(a,n,k);
	for(i=0;i<=(n-1);i++)
	{
		if(i==0)
			printf("%d",a[0]);
		else
		printf(" %d",a[i]);
	}
}
int pai(int a[],int n,int k)
{
	int i;
	int b[100]={0};
	for(i=0;i<=(n-1);i++)
	{
		if(i<=(n-1-k))
		{
			b[i+k]=a[i];
		}
		else
		{
			b[i+k-n]=a[i];
		}
	}
	for(i=0;i<=(n-1);i++)
	{
		a[i]=b[i];
	}
	//return a[n];
}