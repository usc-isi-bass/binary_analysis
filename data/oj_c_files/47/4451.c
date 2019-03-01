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
	int n,i,a[100],b[100];
	scanf("%d",&n);
	if(n!=10)
	{for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			b[i]=a[n-1-i];
		for(i=0;i<n-1;i++)
			printf("%d ",b[i]);
		printf("%d\n",b[n-1]);}
	if(n==10)
	{for(i=0;i<n+1;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n+1;i++)
			b[i]=a[n-i];
		for(i=0;i<n;i++)
			printf("%d ",b[i]);
		printf("%d\n",b[n]);}
}