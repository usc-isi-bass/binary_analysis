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
	char a,b,c,d;
	int e,f,g,h;
	a='z';
	b='q';
	c='s';
	d='l';
	e=20;
	f=40;
	g=10;
	h=50;
	printf("%c %d\n",d,h);
	printf("%c %d\n",b,f);
	printf("%c %d\n",a,e);
	printf("%c %d\n",c,g);
	return 0;
}