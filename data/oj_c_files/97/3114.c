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
	int a,b,c,d,e,f,g;
	scanf("%d",&a);
	b=a/100;
	c=a%100/50;
	d=a%100%50/20;
	e=a%100%50%20/10;
	f=a%100%50%20%10/5;
	g=a%100%50%20%10%5;
	printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
printf("%d\n",g);
	


return 0;
}