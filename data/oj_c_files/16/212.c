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

int main ()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	a=n/1000;
	b=(n%1000)/100;
	c=(n%100)/10;
    d=n%10;
	if (n<10) printf("%d",d);
	else if(n<100) printf("%d%d",d,c);
	else if(n<1000) printf("%d%d%d",d,c,b);
	else if(n<10000) printf("%d%d%d%d",d,c,b,a);
	return 0;
}