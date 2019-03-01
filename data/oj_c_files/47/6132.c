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
	int n,i=0,a[10000];
	scanf("%d",&n);
	while(i<n)
	{
		scanf("%d",&a[i]);
		i++;
	}
	while(i>1)
	{
		i--;
	printf("%d ",a[i]);
	}
	printf("%d",a[0]);
}