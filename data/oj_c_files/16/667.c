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
	int n,x,a,b,c,d;
	scanf("%d",&n);
	if(n<10){
		printf("%d\n",n);
	}
	if(n>=10&&n<100){
		a=n%10;
		b=(n-a)/10;
		printf("%d%d\n",a,b);
	}
	if(n>=100&&n<1000){
		a=n%10;
		b=(n-a)/10%10;
		c=(n-b*10-a)/100;
		printf("%d%d%d\n",a,b,c);
	}
	if(n>=1000&&n<10000){
		a=n%10;
		b=(n-a)/10%10;
		c=(n-b*10-a)/100%10;
		d=(n-c*100-b*10-a)/1000;
		printf("%d%d%d%d\n",a,b,c,d);
	}
	if(n==10000){
        printf("00001\n");
    }
	return 0;
}