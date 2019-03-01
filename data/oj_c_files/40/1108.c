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

void main()
{   


	void S(double a,double b,double c,double d,double jiao);
	double a,b,c,d,jiao;
	scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&jiao);
    S(a,b,c,d,jiao);
	


}

   void S(double a,double b,double c,double d,double jiao)
   {    double PI,s,m;

        s = (a+b+c+d)/2;
        PI = 3.1415926;
		jiao=PI*jiao/360;
        m=cos(jiao);
		if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*m*m)<0)
		{
			printf("Invalid input");
		   
		}
		else
		{
           s=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*m*m);
	      	printf("%.4lf",s);
		}
   }
