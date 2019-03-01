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

void px(int a[100],int k)
{
	int i,j,b;
	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for(i=0;i<k-1;i++)
		printf("%d ",a[i]);
	printf("%d",a[k-1]);
}
void fz()
{
	int m,n,i,a[100],b[100];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	px(a,n);
	printf(" ");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	px(b,m);
}	
int main()
{
	fz();
	return 0;
}