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
	int i,n,a[300],sum=0;
	char s[60000];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			sum++;
			a[sum-1]=i;
		}
	}
	if(sum==0)
		printf("%d",n);
	if(sum==1)
	{
		if(a[0]!=0)
			printf("%d,",a[0]);
		if(n-a[0]-1!=0)
		   printf("%d",n-a[0]-1);
	}
	if(sum>=2)
	{
		if(a[0]!=0)
		   printf("%d,",a[0]);
		for(i=1;i<=sum-1;i++)
		{
			if(a[i]-a[i-1]-1!=0)
			   printf("%d,",a[i]-a[i-1]-1);
		}
		if(n-a[sum-1]-1!=0)
		   printf("%d",n-a[sum-1]-1);
	}
	return 0;
}