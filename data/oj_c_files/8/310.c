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


void turn(int a[],int n)
{
	int temp,i,j;
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i<n-1)
			printf(" ");
	}
}

int main()
{
	int x,y,i;
	int b[100],c[100];
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<y;i++)
	{
		scanf("%d",&c[i]);
	}
	turn(b,x);
	printf(" ");
	turn(c,y);
	return 0;
}


