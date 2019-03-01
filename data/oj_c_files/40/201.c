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
	double a,b,c,d,e,s,t,S;  //e??????
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
         s=1.0/2*(a+b+c+d); 
	t=(s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(e*PI*1/2/180)*cos(e*PI*1/2/180);//(e*PI*1/2/180)???????????2
    if(t<0)
	{
		printf("Invalid input");
	}
	else
	{
		S=sqrt(t);
		printf("%.4f",S);
	}
    return 0;
}
