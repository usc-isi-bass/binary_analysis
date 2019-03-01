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
	int a,z,x,c,v,b,n,y,t;
	scanf("%d",&a);
    z=(a-a%100)/100;
	x=(a-100*z-(a-100*z)%50)/50;
	y=a-100*z-50*x;
	c=(y-y%20)/20;
	v=(y-20*c-(y-20*c)%10)/10;
	t=a%10;
	b=(t-t%5)/5;
	n=t-5*b;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",z,x,c,v,b,n);
}
