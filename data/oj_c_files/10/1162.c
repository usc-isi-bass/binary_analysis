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
	int i,j,k,n,t,max=0,a[26]={0},b[26]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		t=0;
		for(j=0;j<i;j++)
		{
			if(a[j]>=a[i])
			{
				if(b[j]>t)
					t=b[j];
			}
		}
		if(t==0)
			b[i]=1;
		else
			b[i]=t+1;
	}
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
			max=b[i];
	}
	printf("%d\n",max);
	return 0;
} 