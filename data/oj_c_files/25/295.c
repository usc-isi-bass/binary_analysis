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

double f(double a);
int main(){
    double n,m;
    scanf("%lf",&n);
	m=f(n);
	printf("%.0lf",m);
	return 0;
}
double f(double a)
{
    double b;
	if(a==0) b=1.0;
    else if(a==1) b=2,0;
	else b=f(a-1)*2.0;
	return b;
}
