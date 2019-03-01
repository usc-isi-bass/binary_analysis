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


double sqar(double f);

int main()
{
    double a,b,c,d,e,f,g,s,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	s=0.5*(a+b+c+d);
    g=e*PI/360;
	f=((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*pow(cos(g),2));
    if(f>=0){
     S=sqrt(f); 
	 printf("%0.4lf",S);
	}
	else {
		printf("Invalid input");
	}
	return 0;
}

