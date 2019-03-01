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
	int m,a,b,c,d,e,f;
	scanf("%d",&m);
	a=m/100;
	m=m%100;
	b=m/50;
	m=m%50;
	c=m/20;
	m=m%20;
	d=m/10;
	m=m%10;
	e=m/5;
	f=m%5;
printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
return 0;
}