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

main()
{
	double mianji(double a,double b,double c,double d,double e);
	double A,B,C,D,E,g,S,F,H;
	scanf("%lf%lf%lf%lf%lf",&A,&B,&C,&D,&E);
	S=0.5*(A+B+C+D); 
	H=E/360*3.1415926;
	F=cos(H);
	if ((S-A)*(S-B)*(S-C)*(S-D)-A*B*C*D*F*F<0)
	{printf("Invalid input\n");}
	else
	{g=mianji(A,B,C,D,E);
	printf("%.4lf",g);}

}
    double mianji(double a,double b,double c,double d,double e)
	{
	double s,f,i,h;
	
	s=0.5*(a+b+c+d); 
	h=e/360*3.1415926;
	f=cos(h);
	
	    


	i=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*f*f);
    return (i);
	
	}
