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
	int a,b,c,d,e,f,g,h,m;
	scanf("%d",&m);
	a=m%5;
	b=((m-a)%10)/5;
	f=(m-(m%100))/100;
	g=m-100*f;
	if(g>=50)
		e=1;
	else
		e=0;
	h=g-50*e-5*b-a;
	d=(h-(h%20))/20;
	c=(h-20*d)/10;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",f,e,d,c,b,a);
	return 0;
}
	
	

