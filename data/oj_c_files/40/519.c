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
double a,b,c,d,e,f,h,s,i,j,S;
    scanf("%lf",&a);
	scanf("%lf",&b);
    scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&e);
	f=e/2;
	h=cos ((f/360)*2*3.1415926);
    s =(a+b+c+d)/2; 
	i=(s-a)*(s-b)*(s-c)*(s-d);
	j=(a*b*c*d*h*h);
	if( i-j<0){
	printf("Invalid input\n");
	}
else
    {S = sqrt(i-j); 
	printf("%.4lf\n",S);}
	return 0;
}

