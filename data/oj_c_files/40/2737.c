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
	double a,b,c,d,aq,s,re;
	cin>>a>>b>>c>>d>>aq;
	if(a+b+c>d&&a+c+d>b&&a+b+d>c&&b+c+d>a)
	{
		s=(a+b+c+d)/2;
		re=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(aq*Pi/360)*cos(aq*Pi/360)); 
		printf("%.4lf",re);
	}
	else cout<<"Invalid input";
}