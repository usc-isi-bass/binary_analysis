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

	int i,b,c,x;
	int a[100];
	scanf("%d",&x);
	scanf("%d",&b);
	c=b;

	for(i=1;i<=x-1;i++)
	{
		scanf("%d",&a[i-1]);
		if(a[i-1]>=b)b=a[i-1];
	}
	for(i=1;i<=x-1;i++)
	{
		if(a[i-1]>=c&&a[i-1]<b)c=a[i-1];
	}
	printf("%d\n%d",b,c);
	return 0;
}
