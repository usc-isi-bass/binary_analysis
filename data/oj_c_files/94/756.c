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
	int n,i,a[1000],t,s=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{if(a[j]<a[i]){t=a[j];a[j]=a[i];a[i]=t;}}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			if(s==0)
			{s=1;printf("%d",a[i]);}
			else
				printf(",%d",a[i]);
		}
	}
	return 0;
}

