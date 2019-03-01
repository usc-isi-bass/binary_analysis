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
	int a[100];
	int n;
	int i;
	int max=0,m2=0;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]>m2&&a[i]!=max)
			m2=a[i];
	}
	printf("%d\n",max);
	printf("%d\n",m2);
	return 0;
}