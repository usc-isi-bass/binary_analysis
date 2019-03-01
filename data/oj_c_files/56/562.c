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
	int n;
	int a,b,c,d,e,s;
	scanf("%d",&n);
	if(n/10000>0){
		a=(n%10);
		b=(n%100)/10;
		c=(n%1000)/100;
		d=(n%10000)/1000;
		e=n/10000;
		s=a*10000+b*1000+c*100+d*10+e;
	}
	else if(n/1000>0){
		a=(n%10);
		b=(n%100)/10;
		c=(n%1000)/100;
		d=n/1000;
		s=a*1000+b*100+c*10+d;
	}
	else if(n/100>0){
		a=n%10;
		b=(n%100)/10;
		c=n/100;
		s=a*100+b*10+c;
	}
	else if(n/10>0){
		a=n%10;
		b=n/10;
		s=a*10+b;
	}
	printf("%d",s);
	return 0;
}



