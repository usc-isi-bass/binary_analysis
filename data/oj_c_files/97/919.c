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
	int n;
	int b,ws,es,s,w,y;
	scanf("%d",&n);
	b=n/100;
	ws=(n%100)/50;
	es=(n%50)/20;
	s=(n-100*b-50*ws-20*es)/10;
	w=(n%10)/5;
	y=n%5;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,ws,es,s,w,y);
	return 0;
}
