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

int main(){
	int s,a,b,c,d,e,f,g,h;
	scanf("%d",&s);
	a=s/100;
	b=(s-100*a)/10;
	c=s-100*a-10*b;
	d=b/5;
	e=(b-5*d)/2;
	f=b-5*d-2*e;
	g=c/5;
	h=c-5*g;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,d,e,f,g,h);
	return 0;
}