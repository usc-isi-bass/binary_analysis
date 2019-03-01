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

int main (){
int m,a,b,c,d,e,f;
scanf ("%d",&m);
int i=1;
if(i<=m){
i++;
a=m/100;
b=(m-100*a)/50;
c=(m-100*a-50*b)/20;
d=(m-100*a-50*b-20*c)/10;
e=(m-100*a-50*b-20*c-10*d)/5;
f=m-100*a-50*b-20*c-10*d-e*5;
printf ("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
}
return 0;
}