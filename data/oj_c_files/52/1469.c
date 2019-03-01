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
	int n,m,i,a[100],k;
	scanf("%d %d\n",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d\n",&a[i]);
	for(i=1;i<=n;i++)
	{if(i<=m)
	k=a[n-m+i];
	else
	k=a[i-m];
	if(i==n)
	printf("%d\n",k);
	else
	printf("%d ",k);
	}
}
