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
	int a,b,c,A,B,C;
	for(a=1;a<=3;a++)
	{
		for(b=1;b<=3;b++)
		{
			for(c=1;c<=3;c++)
			{
				A=(b>a)+(a==c);
				B=(a>b)+(a>c);
				C=(c>b)+(b>a);
				if(((A>B&&a<b)||(A<B&&a>b)||(A==B&&a==b))
					+((A>C&&a<c)||(A<C&&a>c)||(A==C&&a==c))
					+((B>C&&b<c)||(B<C&&b>c)||(B==C&&b==c))==3)
				{
					if(a>=b&&b>=c)
						printf("CBA");
					if(b>a&&b>=c)
						printf("CAB");
					if(c>a&&a>=b)
						printf("BAC");
					if(a>=b&&c>b)
						printf("BCA");
					if(b>a&&c>a)
						printf("ACB");
					if(c>b&&b>a)
						printf("ABC");
					break;
				}
			}
		}
	}
	return 0;
}