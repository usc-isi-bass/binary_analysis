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
	int n,i,m,flag;
	scanf("%d",&n);
	int a[200000];
	for (i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
		printf("%d",a[1]);
	else
	{
	printf("%d",a[1]);
	for (i=2;i<=n;i++)
	{
		for (m=1;m<i;m++)
		{
			if (a[i]==a[m])
			{
				flag=1;
				break;
			}
			else
				flag=-1;
		}
		if(flag==-1)
			printf(" %d",a[i]);
	}

	}
	return 0;
}