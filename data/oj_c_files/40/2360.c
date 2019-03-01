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

int main ()
{
	double a,b,c,d,x,s,y,mj;
	double const pi=3.1415926;
	cin>>a>>b>>c>>d>>x;
	s=(a+b+c+d)/2;
	 y=x/360.0*pi;
	 if ((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y)<0)
		 cout<<"Invalid input"<<endl;
	 else
		 {
		 mj=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(y)*cos(y));
		cout<<fixed<<setprecision(4)<<mj<<endl;
		 }
	return 0;
}
