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
	int n;
	cin>>n;
	while(n--)
	{
		float a,b,c;
		cin>>a>>b>>c;
		double delta=b*b-4*a*c;
		cout<<fixed<<setprecision(5);
		if(delta>0)
		{
			double x1=(-b+sqrt(delta))/(2*a);
			double x2=(-b-sqrt(delta))/(2*a);
			if(x1==-0.0) x1=0.0;
			if(x2==-0.0) x2=0.0;
			cout<<"x1="<<x1<<";x2="<<x2<<endl;
			continue;
		}
		if(delta==0)
		{
			double x=-b/(2*a);
			if(x==-0.0) x=0.0;
			cout<<"x1=x2="<<x<<endl;
			continue;
		}
		if(delta<0)
		{
			double re=-b/(2*a);
			double im=sqrt(-delta)/(2*a);
			if(re==-0.0) re=0.0;
			cout<<"x1="<<re<<"+"<<im<<"i;x2="<<re<<"-"<<im<<"i"<<endl;
		}
	}
 	return 0;
} 