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
	int a,b,c,d,n,i=3;
	scanf("%d",&n);
    scanf("%d %d",&a,&b);
	if(a<b)
	{
		d=a;
		a=b;
		b=d;
	}
    while(i<=n)
	{
		scanf("%d",&c);
		if(c>a)
		{
			b=a;
			a=c;
		}
		else if(c>b&&a>c)
		{
			b=c;
		}
        i++;
	}
	printf("%d\n%d\n",a,b);
	return 0;
}