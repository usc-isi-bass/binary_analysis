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

struct student
	{
		int weigh;
	};
int main()
{

	int a=0,b=0,c=0,d=0;
	struct student zhao,qian,sun,li;
	zhao.weigh=a;
	qian.weigh=b;
	sun.weigh=c;
	li.weigh=d;
	for(a=10;a<=50;a=a+10)
		for(b=10;b<=50;b=b+10)
			for(c=10;c<=50;c=c+10)
				for(d=10;d<=50;d=d+10)
				{
					if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
						if(a+d>c+b)
							if(a+c<b)
								if((a+b)==(c+d))
								{
									printf("l %d\nq %d\nz %d\ns %d",d,b,a,c);
									printf("\n");
								}
				}
				return 0;
}

