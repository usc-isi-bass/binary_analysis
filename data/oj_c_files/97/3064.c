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
	int a,b,c,d,e,f;
	scanf("%d",&a);
	b=a%100;
	printf("%d\n",(a-b)/100);
	c=b%50;
    printf("%d\n",(b-c)/50);
	d=c%20;
    printf("%d\n",(c-d)/20);
	e=d%10;
    printf("%d\n",(d-e)/10);
	f=e%5;
    printf("%d\n",(e-f)/5);
	printf("%d",f);
	return 0;

}