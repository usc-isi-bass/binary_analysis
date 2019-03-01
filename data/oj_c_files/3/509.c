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

int a[999];
void main()
{
	int n,k,i,j;
	scanf("%d%d",&n,&k);
	for(i=0;i<=n-1;i++)
	{scanf("%d",&a[i]);}
	int b=0;
	for(i=0;i<=n-2;i++)
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]+a[j]==k)
			{
				b=b+1;
			}
		}
		if(b>=1)
		{
			printf("yes\n");
		}
		else printf("no\n");
}