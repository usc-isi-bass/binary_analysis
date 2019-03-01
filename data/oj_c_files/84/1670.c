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
	int i=3,n,a,b,c;
	scanf("%d%d%d",&n,&a,&b);
	while(i<=n)
	{
		scanf("%d",&c);
		if(a>=b&&c>=b)
			b=c;
		else
		{
			if(b>=a&&c>=a)
				a=c;
		}
		i++;
	}
	if (a<b)
	{
	 c=a;
	 a=b;
	 b=c;
	}
	printf("%d\n%d",a,b);
	return 0;
}