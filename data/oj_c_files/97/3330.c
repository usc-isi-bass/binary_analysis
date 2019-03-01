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
int m;
 scanf("%d",&m);
 int a,b,c,d,e,f;
 a=m/100;
 b=(m-100*a)/50;
 c=(m-100*a-50*b)/20;
 d=(m-a*100-50*b-20*c)/10;
 e=(m-a*100-50*b-20*c-10*d)/5;
 f=(m-a*100-50*b-20*c-10*d-e*5)/1;
 printf("%d\n",a);
 printf("%d\n",b);
 printf("%d\n",c);
 printf("%d\n",d);
 printf("%d\n",e);
 printf("%d\n",f);
	  return 0;
}