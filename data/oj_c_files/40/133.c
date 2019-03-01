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


int main(int argc, char* argv[])
{
	
	double a=0,b=0,c=0,d=0,n=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
    scanf("%lf",&n);
double	s=1.0/2*(a+b+c+d);    
double g=n/360*PI;
double f=cos(g);
double S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*f*f); 
if((s-a)*(s-b)*(s-c)*(s-d)<0){
	printf("Invalid input");}
else{
	printf("%.4f",S);};
	return 0;
}
