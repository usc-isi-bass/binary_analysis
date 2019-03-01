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
	int x;
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf("%d",&x);
	a=x/10000;
	b=(x-10000*a)/1000;
	c=(x-10000*a-1000*b)/100;
	d=(x-10000*a-1000*b-100*c)/10;
	e=x%10;
	{
		if(a==0&&b!=0&&c!=0&&d!=0&&e!=0)
			printf("%d%d%d%d",e,d,c,b);
		else
			if(a==0&&b==0&&c!=0&&d!=0&&e!=0)
				printf("%d%d%d",e,d,c);
			else
				if(a==0&&b==0&&c==0&&d!=0&&e!=0)
					printf("%d%d",e,d);
				else
					if(a==0&&b==0&&c==0&&d==0&&e!=0)
						printf("%d",e);
					else
						if(a!=0&&b!=0&&c!=0&&d!=0&&e!=0)
							printf("%d%d%d%d%d",e,d,c,b,a);
						else
							printf("I don't know!");
	}
	return 0;
}