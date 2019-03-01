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

int main()
{
	int n,a[3],i,c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b,p,q,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&a[0],&a[1],&a[2]);
		if((a[0]%4==0&&a[0]%100!=0)||a[0]%400==0)
		{
			c[1]=29;
		}
		else c[1]=28;
		if(a[1]>a[2])
		{
			p=a[1];q=a[2];
			for(j=q-1,b=0;j<p-1;j++)
			{b=b+c[j];}
		}
		else
		{
			p=a[2];q=a[1];
			for(j=q-1,b=0;j<p-1;j++)
			{b=b+c[j];}
		}
		if(b%7==0) printf("YES\n");
		else printf("NO\n");
	}
}