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
	float a,b,c;
	int i,n;
	double p,q;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>a>>b>>c;
	{if(b==0)
		p=0.0;
	if(b!=0)
	p=-b/(2*a);
	}
	q=b*b-4*a*c;
	if(q>0)
		cout<<"x1="<<fixed<<setprecision(5)<<p+(sqrt(q)/2/a)<<";x2="<<p-(sqrt(q)/2/a)<<endl;
	if(q==0)
		cout<<"x1=x2="<<fixed<<setprecision(5)<<p<<endl;
	if(q<0)
		cout<<"x1="<<fixed<<setprecision(5)<<p<<"+"<<(sqrt(-q)/2/a)<<"i"<<";x2="<<p<<"-"<<(sqrt(-q)/2/a)<<"i"<<endl;
	}
	return 0;

}