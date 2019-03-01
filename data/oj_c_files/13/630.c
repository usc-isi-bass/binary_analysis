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
	int a[20000],n,i,j,k;
	i=0;
	k=1;
	scanf("%d",&n);
	if(n==1)
	{
		scanf("%d",&a[i]);
	    printf("%d",a[i]);
	}
	else
	{
		scanf("%d",&a[i]);
	    printf("%d",a[i]);
		for(i=1;i<n;i++,k++)
	{
		scanf("%d",&a[i]);
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(k<(n-1))
		{if(i==j)
		printf(" %d",a[i]);}
		else
		{
				for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
				if(i==j)
			printf(" %d",a[i]);
		}
	}}
	return 0;
}

