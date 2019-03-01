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
	int n,a[301],i,h,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		for(h=1;h<i;h++)
		{
			if(a[i]==a[h])
			{
				i--;
				n--;
				break;
			}
		}
	}
	printf("%d",a[1]);
	for(i=2;i<=n;i++)
		printf(",%d",a[i]);
	printf("\n");
}