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
	long a;
	int b,c,d,e,f;
	scanf("%ld",&a);
    f=a%10;
	a=(int)(a/10);
	e=a%10;
	a=(int)(a/10);
    d=a%10;
	a=(int)(a/10);
    c=a%10;
	a=(int)(a/10);
    b=a%10;
	if(b!=0)
		printf("%d%d%d%d%d\n",f,e,d,c,b);
	else
		if(c!=0)
	     	printf("%d%d%d%d\n",f,e,d,c);
		else
			if(d!=0)
				printf("%d%d%d\n",f,e,d);
			else
				if(e!=0)
                    printf("%d%d\n",f,e);
				else
					printf("%d\n",f,f);
}
