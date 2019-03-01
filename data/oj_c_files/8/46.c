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

void main()
{
	void sort(int array[],int n);
	int m,n,i;
	int a[100],b[100],c[200];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	sort(a,m);
	sort(b,n);
	for(i=0;i<m+n;i++)
	{
		if(i<m)
			c[i]=a[i];
		else
			c[i]=b[i-m];
	}
	for(i=0;i<m+n;i++)
	{
		if(i<m+n-1)
			printf("%d ",c[i]);
		else
			printf("%d\n",c[i]);
	}
}

void sort(int array[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(array[j]<array[k])
				k=j;
			t=array[k];array[k]=array[i];array[i]=t;
	}
}
	
