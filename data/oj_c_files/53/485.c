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

void main()
{
	int a[300];
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=(n-1);i>0;i--)
	{
		for(j=0;j<i;j++)
		{if(a[i]==a[j])
		a[i]=0;
		}
	}
	j=0;
	for(i=0;i<n;i++)
	{if(a[i]!=0)
	{a[j]=a[i];
	j++;
	}
	}
	for(i=0;i<j;i++)
	{
		printf("%d",a[i]);
		if(i!=(j-1))
			printf(",");
	}
}

