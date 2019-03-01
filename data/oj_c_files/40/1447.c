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
double a,b,c,d,f,S,s;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
scanf("%lf",&d);
scanf("%lf",&f);
S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((f/2)/180*PI)*cos((f/2)/180*PI)); 
if ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f/2)*cos(f/2)<0){
    printf("Invalid input");
}else{
    printf("%.4lf",S);
}
return 0;
}