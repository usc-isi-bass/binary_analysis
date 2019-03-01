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

int m=0;
int main()
{
	int * change(int x[100],int y,int z);
	int a[100];
	int n,m,i;
	int *pt;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	pt=change(a,n,m);
	printf("%d",*pt);
	for(i=1;i<n;i++)
	{
		printf(" %d", *(pt+i));
	}
}
int * change(int x[100],int y,int z)
{
	int j,k,temp=0;
	for(j=0;j<z;j++)
	{
		temp=x[y-1];
		for(k=y-2;k>=0;k=k-1)
		{
			x[k+1]=x[k];
		}
		x[0]=temp;
	}
	return(x);
}