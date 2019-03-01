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
    int a,b,c,n;
	scanf("%d",&n);
	a=n/100;
	b=(n-100*a)/10;
	c=n-100*a-10*b;
	int m;
	m=100*c+10*b+a;
	printf("%d\n",m);
	return 0;
}