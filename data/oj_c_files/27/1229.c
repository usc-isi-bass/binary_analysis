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
	double a,b,c,x1,x2,r1,r2,i1;
	cin>>n;
	while(n--)
	{
		cin>>a>>b>>c;
		if(b*b-4*a*c>0)
		{
			r1=(-b + sqrt(b*b-4*a*c))/(2*a);
		    r2=(-b - sqrt(b*b-4*a*c))/(2*a);
			x1=r1>r2?r1:r2;
			x2=r1<r2?r1:r2;
			cout<<fixed<<setprecision(5)<<"x1="<<x1<<";x2="<<x2<<endl;
		}
		else if(b*b-4*a*c<0)
		{
			i1=sqrt(-b*b+4*a*c)/(2*a);
			cout<<fixed<<setprecision(5)<<"x1="<<-b/(2*a)<<"+"<<fabs(i1)
				<<"i;x2="<<-b/(2*a)<<"-"<<fabs(i1)<<"i"<<endl;
        }
		else 
		{
            x1=-b/(2*a);
            cout<<fixed<<setprecision(5)<<"x1=x2="<<x1<<endl;
		}
	}
	return 0;
}

