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
	int A,B,C,D,E,I,a,b,c,d,e,n;
	scanf("%d",&n);
	A=n/100;
	a=n%100;
	B=a/50;
    b=a%50;
	C=b/20;
	c=b%20;
	D=c/10;
	d=c%10;
	E=d/5;
	e=d%5;
	I=e;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",A,B,C,D,E,I);
	return 0;
}