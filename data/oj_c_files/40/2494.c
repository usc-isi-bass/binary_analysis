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


double S(double,double,double,double,double);
int main()
{
    double a,b,c,d,jiaodu,pingjun,hudu,mianji,genhaonei,PI=3.1415926;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&jiaodu);
    hudu=jiaodu*2*PI/360/2;
    pingjun=(a+b+c+d)/2;
    S(a,b,c,d,hudu);
    return 0;
}
double S(double a,double b,double c,double d,double hudu)
{    double pingjun,mianji,genhaonei;
     pingjun=(a+b+c+d)/2;
     genhaonei=(pingjun-a)*(pingjun-b)*(pingjun-c)*(pingjun-d) - a*b*c*d*cos(hudu)*cos(hudu);
     if(genhaonei<0)
	 {printf("Invalid input");}
     else 
	 {mianji=sqrt(genhaonei);
     printf("%.4lf",mianji);}
     return 0;
}
