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

void Input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void Turn(int a[],int n,int m)
{
	int i,j,temp;
	for(i=n-m;i<n;i++)
	{
		for(j=i-1;j>=i-n+m;j--)
		{
		    temp=a[j];
		    a[j]=a[j+1];
		    a[j+1]=temp;
		}
	}
}
Output(int a[],int n)
{
	int i;
	printf("%d",a[0]);
    for(i=1;i<n;i++)
		printf(" %d",a[i]);
	printf("\n");
}
void main()
{
	int n,m,num[100];
	scanf("%d%d",&n,&m);
	Input(num,n);
	Turn(num,n,m);
	Output(num,n);
}