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
	double s,a,b,c,d,k,m;
	cin>>a>>b>>c>>d>>k;
	s=(a+b+c+d)/2;
	if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow((cos(3.1415926*k/360)),2)<0)
		cout<<"Invalid input";
	else{
m = sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*pow((cos(3.1415926*k/360)),2)); 
printf("%.4f",m);
	}
return 0;
}
