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
	int a, b, c;
	int j, i;
    scanf("%d", &j);
	for (i=0;i<j;i++)
	{
		scanf("%d", &a);
		if(i==0)
		{
			c=a;
			b=a;
		}
		else if(i>=2)
		{
			if(b>a)
			{
				if(c<a)
					c=a;
				else if(c>a&&c>b)
				{
					a=b;
					b=c;
					c=a;
				}
			}
			else if(b<a&&c<b)
			{
			c=b;
			b=a;
			}
			else if(b<a&&c>=b)
			{
				b=a;
			}
		}
		else if(b<a)
		b=a;
	}
	printf("%d\n", b);
	printf("%d", c);
	return 0;
}