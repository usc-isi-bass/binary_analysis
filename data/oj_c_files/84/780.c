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
	int n,a[100],i,e;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[1]<a[2])
	{
		e=a[1];
		a[1]=a[2];
		a[2]=a[1];
	}
	else
	{
	}
	for(i=3;i<=n;i++)
	{
		if(a[i]>a[1])
		{
			e=a[1];
			a[1]=a[i];
			a[2]=e;
		}
		else if(a[i]<a[2])
		{
		}
		else
		{
			a[2]=a[i];
		}
	}
	printf("%d\n%d\n",a[1],a[2]);
	return 0;
}