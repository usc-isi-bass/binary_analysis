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
	int a[30],b[30],n,i,j,max,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=1;
	}
	for(i=n-1;i>=0;i--)
	{
		max=0;
		for(j=n-1;j>i;j--)
		{
			if(a[i]>=a[j])
			{
				if(b[j]>max){max=b[j];}
			}
			if(a[i]>=a[j]&&b[j]==max)
			{
				b[i]=b[j]+1;
			}
		}
		if(b[j]>ans)ans=b[j];
	}

	printf("%d",ans);
	return 0;
}