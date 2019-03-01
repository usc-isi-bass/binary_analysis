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
	int a[300],n,k,i;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		for(k=0;k<=i-1;k++)
		{
			if (a[k]==a[i])
				a[i]=-100;
		}
	}
	for(i=0;i<=n-1;i++)
	{
		if (i==0)
			printf("%d",a[i]);
		else if (a[i]!=-100)
			printf(",%d",a[i]);
	}
	return 0;
}