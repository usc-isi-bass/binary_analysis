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
	int n,m,a,b,c,d,e;
	scanf("%d",&n);
	if(n>1000){
		a=n%10;
		b=(n%100-a)/10;
		c=(n%1000-a-10*b)/100;
		d=(n%10000-a-10*b-100*c)/1000;
		e=(n%100000-a-10*b-100*c-1000*d)/10000;
		m=a*10000+b*1000+c*100+d*10+e;
		printf("%d",m);}
	else if(n<1000){
		a=n%10;
		b=(n%100-a)/10;
		c=(n%1000-a-10*b)/100;
		m=a*100+b*10+c;
		printf("%d",m);}
	return 0;
}
