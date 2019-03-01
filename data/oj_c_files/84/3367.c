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
	int i,j,k,l,m,n,a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	m=a[1];
	for(i=2;i<=n;i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	printf("%d\n",m);
    for(i=1;i<=n;i++)
	{
		if(a[i]<m)
			k=a[i];
		break;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]>k&&a[i]<m)
			k=a[i];
	}
	printf("%d",k);
}