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



double S (double a,double b,double c,double d,double rad,double s){
    s = (a+b+c+d)/2;
    return sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(rad)*cos(rad));
}

int main(){
    double a,b,c,d,e,num,rad,s;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&num);
    rad=num/360*3.1415926;
	s = (a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(rad)*cos(rad)<0){
	   printf("Invalid input");
	}
	else 
	
    printf("%.4lf\n",S(a,b,c,d,rad,s));
    return 0;
}