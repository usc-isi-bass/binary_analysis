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


void change(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
}

int min(int x,int y)
{
	int z;
	if(x<y)
		z=x;
	else
		z=y;
	return(z);
}


int MAX(int x,int y)
{
	int z;
	if(x>y)
		z=x;
	else
		z=y;
	return(z);
}

void main()
{
	int num[300],i,n,max=0,max_2=0,t=0;
	char str=',';
	for(i=0;str==',';i++)
	{
		scanf("%d",&num[i]);
		str=getchar();
	}
	n=i;
	if(n==1)
		printf("No");
	else
	{
		for(i=0;i<n;i++)
			max=MAX(max,num[i]);
		for(i=0;i<n;i++)
			if(num[i]<max)
			{
				max_2=MAX(max_2,num[i]);
				t=1;
			}
		if(t==0)
			printf("No");
		else
			printf("%d",max_2);
	}
	printf("\n");
}