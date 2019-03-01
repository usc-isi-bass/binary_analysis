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

int main()
{
	double s,S,a,b,c,d,e,f,g;
	scanf("%lf\n%lf\n%lf\n%lf\n%lf",&a,&b,&c,&d,&e);
	s=(a+b+c+d)/2.0;
	f=PI*e/360.0;
	g=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(f)*cos(f);
	if(g>0||g==0){
	    S=sqrt(g);
	    printf("%.4lf",S);
	}
	if(g<0)
        printf("Invalid input");
	return 0;
}