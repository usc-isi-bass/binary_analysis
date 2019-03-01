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
{   double a,b,c,d;
    int jiaohe;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);	
	scanf("%d",&jiaohe);
    if(((0.5*(a+b+c+d)-a)*(0.5*(a+b+c+d)-b)*(0.5*(a+b+c+d)-c)*(0.5*(a+b+c+d)-d) - a*b*c*d*cos(((double)jiaohe/180/2)*3.1415926)*cos(((double)jiaohe/180/2)*3.1415926))<0){printf("Invalid input");}
	if(((0.5*(a+b+c+d)-a)*(0.5*(a+b+c+d)-b)*(0.5*(a+b+c+d)-c)*(0.5*(a+b+c+d)-d) - a*b*c*d*cos(((double)jiaohe/180/2)*3.1415926)*cos(((double)jiaohe/180/2)*3.1415926))>0)
	{	printf("%.4lf\n", sqrt((0.5*(a+b+c+d)-a)*(0.5*(a+b+c+d)-b)*(0.5*(a+b+c+d)-c)*(0.5*(a+b+c+d)-d) - a*b*c*d*cos(((double)jiaohe/180/2)*3.1415926)*cos(((double)jiaohe/180/2)*3.1415926)));}
	return 0;
}

