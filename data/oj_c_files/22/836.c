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
	int a[300],b,i=0,j,t,n;
	char c;
	while(1)
	{
		scanf("%d%c",&a[i],&c);
		if(c==',')
			i++;
		else
			break;
	}
	n=i+1;
	if(n==1)
	{
		printf("No\n");
		return 0;
	}
	for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	if(a[0]==a[n-1])
	{
		printf("No\n");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i+1]<a[i])
		{
			printf("%d\n",a[i+1]);
			break;
		}
	}
}

