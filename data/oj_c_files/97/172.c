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

void main()
{
	int n,a,b,c,d,e,f;
	scanf("%d",&n);
		a=n/100;b=(n-a*100)/50;
		c=(n-a*100-b*50)/20;
		d=(n-a*100-b*50-20*c)/10;
		e=(n-a*100-b*50-20*c-d*10)/5;
		f=(n-a*100-b*50-20*c-d*10-5*e)/1;
	if(n=a+b+c+d+e+f)
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
}