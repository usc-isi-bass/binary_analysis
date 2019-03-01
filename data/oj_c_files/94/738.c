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
	int temp,flag=0,q=0,i,j,n,a[N];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&temp);
		if(temp&1)
		a[q++]=temp;
	}
	for(i=q-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<q;i++)
	{
		if(flag==0) flag=1;
		else printf(",");
		printf("%d",a[i]);
	}
}