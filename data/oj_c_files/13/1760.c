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
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i-1]);
	}
	printf("%d",a[0]);
	for(i=2;i<=n;i++)
	{
		int j=1;
		while(j<i)
		{
			if(a[i-1]==a[j-1])
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if(j==i)
		{
			printf(" %d",a[i-1]);
		}
	}
	return 0;
}
