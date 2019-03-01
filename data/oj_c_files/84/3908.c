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
	int n,u,c;
	int a[100];
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	u=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>u)
		{
			u=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==u)
		{
		   a[i]=0;
		}
	}
	c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>c)
		{
			c=a[i];
		}
	}

	printf("%d\n%d\n",u,c);
	return 0;
}
