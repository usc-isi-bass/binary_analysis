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
	int a[100000],i,n,k,*p,j;
	scanf("%d",&n);
	for(p=a;p<(a+n);p++)
	{
		scanf("%d",p);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			for(p=a,j=i;j<n-1;j++)
			{
				*(p+j)=*(p+j+1);
			}
			i=i-1;
			n--;
		}
	}
	for(p=a;p<(a+n-1);p++)
	{
		printf("%d ",*p);
	}
	printf("%d",a[n-1]);
	return 0;
}