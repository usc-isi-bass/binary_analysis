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
	int x,a,b,q,w,r,t,y,c,d,e,f,g,h;
	scanf("%d",&x);
	c=x%100;
	d=c%50;
	e=d%20;
	f=e%10;
	g=f%5;
	h=g%2;
	a=(x-c)/100;
	b=(c-d)/50;
    q=(d-e)/20;
	w=(e-f)/10;
	r=(f-g)/5;
	 printf("%d\n\n",a);		 	 
	 printf("%d\n\n",b);
	 printf("%d\n\n",q);
	 printf("%d\n\n",w);	 
	 printf("%d\n\n",r);
	 printf("%d\n\n",g);
	 
	 return 0;
}
