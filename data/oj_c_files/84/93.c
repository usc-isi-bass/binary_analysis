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
	int a[100]={0},i,n,k1=0,k2=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>k1)
			k2=k1,k1=a[i];
		else if(a[i]<=k1&&a[i]>=k2)
			k2=a[i];
	}
	printf("%d\n%d\n",k1,k2);
}
