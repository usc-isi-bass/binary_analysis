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
	int n,max,se,i;
    int a[100];
    scanf("%d",&n);
	i=1;
	scanf("%d",&a[i]);
	max=a[i];
	se=a[i];
	i=2;
	scanf("%d",&a[i]);
	if (a[i]>max)
	{
		se=max;
		max=a[i];
	}
	else 
	{
		if (a[i]<se)
		{
			se=a[i];
		}
	}
	i=3;
	while (i<=n)
	{
		scanf("%d",&a[i]);
		if (a[i]>max)
		{
			se=max;
			max=a[i];
		}
		else 
		{
			if (max>a[i]&&a[i]>se)
			{
				se=a[i];
			}
		}
		i++;
	}
		printf("%d\n%d",max,se);
	return 0;
}

