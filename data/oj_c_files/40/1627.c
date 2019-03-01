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



double mianji(double a,double b,double c,double d,double n)
{
	double w,m,s;
	m=n*3.1415926/360.0;
	s=(a+b+c+d)/2;
	w=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(m)*cos(m);
		
		return(w);
}

void main()
{
	double a,b,c,d,n,e,q;

	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	scanf("%lf",&d);
	scanf("%lf",&n);
   
	e=mianji(a,b,c,d,n);
    
     if (e>0)
	{
			q=sqrt(e);
		printf("%.4lf\n",q);
	}
	else 
	{
		printf("Invalid input\n");
	}
	
}


