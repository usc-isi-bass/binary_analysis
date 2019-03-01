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

int main() {
	int a;
	int b,c,d,e,f;
	scanf("%d",&a);
	b=0;
	c=0;
	d=0;
	e=0;
	f=0;

	while(a>=100){
		a=a-100;
		b=b++;
	}
	while(a>=50){
		a=a-50;
		c=c++;	
	}
	while(a>=20){
		a=a-20;
		d=d++;	
	}
	while(a>=10){
		a=a-10;
		e=e++;	
	}
	while(a>=5){
		a=a-5;
		f=f++;	
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",b,c,d,e,f,a);
    return 0;
	




}