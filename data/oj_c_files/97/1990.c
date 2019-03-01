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
	int n,a,b,c,d,e,f,s;
	scanf("%d",&n);
	s=n;
	a=s/100;
	s=s%100;
	b=s/50;
	s=s%50;
	c=s/20;
	s=s%20;
	d=s/10;
	s=s%10;
	e=s/5;
	s=s%5;
	f=s/1;
	printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
	return 0;
}