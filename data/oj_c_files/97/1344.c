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
	int money;
	scanf("%d",&money);
	int a=money/100;
	printf("%d\n",a);
	int b=(money-100*a)/50;
    printf("%d\n",b);
	int c=(money-100*a-50*b)/20;
	printf("%d\n",c);
	int d=(money-100*a-50*b-20*c)/10;
	printf("%d\n",d);
	int e=(money-100*a-50*b-20*c-10*d)/5;
    printf("%d\n",e);
    int f=money%5;
	printf("%d",f);
	return 0;
}
