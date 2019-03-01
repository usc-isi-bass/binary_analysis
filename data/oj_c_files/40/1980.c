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
float a,b,c,d,s,A;
double X,S;
scanf("%f%f%f%f",&a,&b,&c,&d);
s=(a+b+c+d)/2;
scanf("%f",&A);
A=A/180*PI;
X=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(A/2)*cos(A/2);
if(X<0){
printf("Invalid input");
}
else{
S = sqrt(X);
printf("%.4lf",S); 
}
return 0;
}