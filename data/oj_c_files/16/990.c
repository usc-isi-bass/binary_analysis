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
	int a,b;
	scanf ("%d",&a);
	if (a==100)
	{
		printf("001");
	}
	else
		if (a<=9)
		{
		printf("%d",a);
		}
		else
			if (a<=99)
			{
				b=a%10*10+a/10;
			printf("%d",b);
			}
			else
				if (a<=999)
				{
					b=a%10*100+(a/10)%10*10+a/100;
				printf("%d",b);
				}
				else
					if(a<=9999)
					{
						b=a%10*1000+(a/10)%10*100+(a/100)%10*10+a/1000;
					printf("%d",b);
					}
					return 0;
}