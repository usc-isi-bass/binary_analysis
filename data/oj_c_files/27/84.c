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
{ int n;
 double a,b,c,disc,x1,x2,realpart,imagpart;
 scanf("%d",&n);
 while(n--)
   {scanf("%lf %lf %lf",&a,&b,&c);
    disc=b*b-4*a*c;
	if(disc==0.0)
	{ printf("x1=x2=%.5lf\n",-b/(2.0*a));}
	 
   else  {if(disc>0.0)
   {x1=(-b+sqrt(disc))/(2.0*a);
	     x2=(-b-sqrt(disc))/(2.0*a);
	      printf("x1=%.5lf;",x1);
		  printf("x2=%.5lf\n",x2);}
	     else
		 {realpart=-b/(2.0*a);
		  imagpart=sqrt(-disc)/(2.0*a);
		  printf("x1=%.5lf+%.5lfi;",realpart,imagpart);
		  printf("x2=%.5lf-%.5lfi\n",realpart,imagpart);} }
    }
}