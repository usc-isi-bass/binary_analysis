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
	int a[100];
	int n,i=0;
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i=i+1;
	}
	i=n-1;
	while(i>0)
	{
		printf("%d ",a[i]);
		i=i-1;
	}
	printf("%d",a[0]);
}
