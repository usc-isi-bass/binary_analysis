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

int n;
double b[40];
double c[40];
int main()
{
	char a[10];
	int  t=0,k=0;
	double len;
	double temp;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		scanf("%lf",&len);
		if(a[0]=='m')
			b[k++]=len;
		else
			c[t++]=len;
	}
	for(i=0;i<k-1;i++)
		for(j=0;j<k-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	for(i=0;i<t-1;i++)
		for(j=0;j<t-i-1;j++)
		{
			if(c[j]<c[j+1])
			{
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
		
	for(i=0;i<k;i++)
		printf("%.2f ",b[i]);
	for(i=0;i<t-1;i++)
		printf("%.2f ",c[i]);
		printf("%.2f",c[t-1]);
}