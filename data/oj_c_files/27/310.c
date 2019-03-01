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
	int n,i;
	double a,b,c,x1,x2,f,g;
	cin>>n;
	cout<<fixed;
	for(i=1;i<=n;i=i+1)
	{
		cin>>a>>b>>c;
		f=-b/(2*a);
	    g=sqrt(4*a*c-b*b)/(2*a);
		if(f==-0)
		{
			f=-f;
		}
		if((b*b-4*a*c)<0)
		{
			cout<<setprecision(5)<<"x1="<<f<<"+"<<g<<"i"<<";"<<"x2="<<f<<"-"<<g<<"i"<<endl;
		}
		else if((b*b-4*a*c)==0)
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		    cout<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
		else
		{
			x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
			cout<<setprecision(5)<<"x1="<<x1<<";"<<"x2="<<x2<<endl;
		}
	}
	return 0;
}


	