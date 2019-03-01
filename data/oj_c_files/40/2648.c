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

	double p, a, b, c, d, s, v, x;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&x);
	x=x*3.1415926/360;
	s= (a+b+c+d)/2; 	
	p=cos(x);
    v= sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*p*p);
	if(v>=0)
    printf("%6.4f\n", v);
    else
		printf("Invalid input");	
	return 0;

}