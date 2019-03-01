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
	int m=1,n,a,b,c;
	scanf("%d",&n);
	scanf("%d%d",&b,&c);
	if(c>b)
	{
		c=c+b;b=c-b;c=c-b;
	}
	while (m<=n)
	{
		scanf("%d",&a);
		if (a>b)
		{
			a=a+b;b=a-b;a=a-b;
		}
		else if (a>c)
		{
			a=a+c;c=a-c;a=a-c;
		}
		m++;
	}
	printf("%d\n%d",b,c);
}