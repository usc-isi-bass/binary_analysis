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

/* Note:Your choice is C IDE */
void main()
{   double a,b,c,d,s;
	double ri,S;
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&ri);
	ri*=3.1415926/180;
	ri/=2;
	s=(a+b+c+d)/2;
	S = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(ri)*cos(ri)); 
  if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(ri)*cos(ri)<0) printf("Invalid input");
   else printf("%.4f",S);}