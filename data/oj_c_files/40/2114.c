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
	double angle;
	cin>>a>>b>>c>>d;
	cin>>angle;
	double s;
	double temp1,temp2;
	double pi=3.1415926;
	s=(a+b+c+d)/2;
	temp1=(s-a)*(s-b)*(s-c)*(s-d);
	temp2=angle/360*pi;
	temp2=cos(temp2);
	temp2=temp2*temp2;
	temp2=a*b*c*d*temp2;
	temp1=temp1-temp2;	
	if(temp1<0)
		cout<<"Invalid input"<<endl;
	else
	{
		temp1=sqrt(temp1);
		printf("%.4f\n",temp1);
	}
	return 0;
}