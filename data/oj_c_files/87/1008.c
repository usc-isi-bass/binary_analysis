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
int a, b, c, d, e, f;
int s;
a=1;
s=0;
while (a>0){
scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
if (a>0){
s=3600*(12-a)-60*b-c+3600*d+60*e+f;
printf ("%d\n", s);}}
return 0;}
