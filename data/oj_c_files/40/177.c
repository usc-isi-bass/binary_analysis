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
{   double a,b,c,d,s,e,f,g,PI=3.1415926,S;
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
    f=e/360.0*PI;
    s=1.0/2.0*(a+b+c+d);
	g=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
    if(g<0){
		printf("Invalid input");
	}
	else{
		S=sqrt(g);
		printf("%.4f",S);
    }
    
	return 0;
}