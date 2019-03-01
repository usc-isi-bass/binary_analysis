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

main()
{   int a;
	scanf("%d",&a);
	if(a<10)
	printf("%d",a);
	else if(a<100)
	{ int b,c; b=a/10; c=a-10*b;
	printf("%d%d",c,b);}
	else if(a<1000)
	{ int b,c,d; b=a/100;c=(a-100*b)/10;d=a-100*b-10*c;
	printf("%d%d%d",d,c,b);}
	else if(a<10000)
	{ int b,c,d,e;b=a/1000;c=(a-1000*b)/100;d=(a-1000*b-100*c)/10;
	e=a-1000*b-100*c-10*d;
	printf("%d%d%d%d",e,d,c,b);}
		
}