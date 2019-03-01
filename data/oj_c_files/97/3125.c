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
{
	int x,a,b,c,d,e,f;
	scanf("%d",&x);
    a=x/100;
	b=x%100/50;
	c=x%100%50/20;
	d=x%100%50%20/10;
	e=x%100%10/5;
	f=x%100%10%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
    return 0; 
}