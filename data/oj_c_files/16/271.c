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
	int b,c,d,e,a;
	scanf("%d",&a);
    if(a==10000)printf("00001");
	else
	{
		if(a>=1000)
		{
			e=(int)(a/1000),d=(int)((a-1000*e)/100),c=(int)((a-1000*e-100*d)/10),b=a%10;
		    printf("%d%d%d%d",b,c,d,e);
		}
		else
		{
			if(a>=100)
			{
				d=(int)(a/100),c=(int)((a-100*d)/10),b=a%10;
                printf("%d%d%d",b,c,d);
			}
			else
			{
				if(a>=10)
				{
					c=(int)(a/10),b=a%10;
					printf("%d%d",b,c);
				}
				else printf("%d",a);
			}
		}
	}
	return 0;
}