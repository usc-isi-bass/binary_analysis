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
	double a,b,c,d,p,S,m;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m);
	p=(a+b+c+d)/2;
	m=m*3.1415926/180;

     if ((p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*(cos(m))*(cos(m))<0)
        printf("Invalid input") ;
	 else 
	 {S=sqrt((p-a)*(p-b)*(p-c)*(p-d)-a*b*c*d*(cos(m/2))*(cos(m/2)));
	 printf("%.4lf",S);
	 }
	return 0;
}
