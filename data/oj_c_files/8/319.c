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

void order(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j]<a[j-1])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[i]);
}
void main()
{
	int m,n,i;
	int a[50],b[50];
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	order(a,m);
	printf(" ");
	order(b,n);
	printf("\n");
}



