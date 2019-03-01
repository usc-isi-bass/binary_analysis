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

int main(int argc, char* argv[])
{
    int m,a,b,c,d,e,f;
	scanf("%d", &m);
	a=m/100;
	b=(m%100)/50;
	c=m%100%50/20;
	d=m%100%50%20/10;
	e=m%100%50%20%10/5;
	f=m%100%50%20%10%5/1;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
	return 0;
}