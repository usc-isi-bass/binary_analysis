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
	int a,b,c,d,e,n;
	scanf("%d",&n);
	a=n/10000;
	b=(n-10000*a)/1000;
	c=(n-10000*a-1000*b)/100;
	d=(n-10000*a-1000*b-100*c)/10;
	e=n-10000*a-1000*b-100*c-10*d;
	if(a>0){
		printf("%d\n",e*10000+d*1000+c*100+b*10+a);}
	else{ if(b>0)
		printf("%d\n",e*1000+d*100+c*10+b);
	else{if(c>0)
		printf("%d\n",e*100+d*10+c);
		else{if(b>0)
		printf("%d\n",e*10+d);
		else
		printf("%d\n",e);}}
	}
	return 0;
}

