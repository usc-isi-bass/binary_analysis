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
double a,b,c,d; 
double m,s,l; 
scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&m); 
m=m/360*3.1415926; 
m=cos(m); 
l=1.0/2*(a+b+c+d); 
s=sqrt((l-a)*(l-b)*(l-c)*(l-d)-a*b*c*d*m*m); 
if((l-a)*(l-b)*(l-c)*(l-d)-a*b*c*d*m*m>0) 
{ 
printf("%.4lf\n",s); 
} 
else 
if((l-a)*(l-b)*(l-c)*(l-d)-a*b*c*d*m*m<0) 
printf("Invalid input\n"); 
return 0; 
} 
 
 

  
 
