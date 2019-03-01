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
{
	double a,b,c,d,e,s,S;
	scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
	s=(a+b+c+d)/2;
	S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*pai/2/180)*cos(e*pai/2/180));
          if(((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(e*pai/2/180)*cos(e*pai/2/180))<0)printf("Invalid input\n"); 
	else printf("%.4lf\n",S);
	return 0;
}

