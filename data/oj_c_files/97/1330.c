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
int n;
scanf("%d",&n);
int a=0,s=0,d=0,f=0,g=0,h=0;
a=n/100;
s=n%100/50;
d=n%50/20;
f=(n%100-s*50-d*20)/10;
g=n%10/5;
h=n%5;
printf("%d\n%d\n%d\n%d\n%d\n%d",a,s,d,f,g,h);
return 0;}