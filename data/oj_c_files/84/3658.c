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
	int a,b,c,d,e;
	a=1;
	b=0;
    c=0;
	scanf("%d",&e);
	while(a<=e)
	{a++;
	scanf("%d",&d);
    if(d>c)
	{   b=c;
     	c=d;
	}
    else if(d>b&&d<=c)
	    b=d;
	else b=b;
	     c=c;
	}
	printf("%d\n%d",c,b);
	return 0;
 }
