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
	int n;
	int a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%d",&n);
	a=n/100;
	n%=100;
	b=n/50;
	n%=50;
	c=n/20;
	n%=20;
	d=n/10;
	n%=10;
	e=n/5;
	n%=5;
	f=n;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	return 0;
}
	                                                         