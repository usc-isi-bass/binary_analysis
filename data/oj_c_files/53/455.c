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
	int a[302],n,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		for(k=i+1;k<=n;k++)
			if(a[i]==a[k])
				a[k]=0;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]!=0&&i==1)
		{
			printf("%d",a[i]);
		}
		else if(a[i]!=0)
			printf(",%d",a[i]);
	}
}
	