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
	for(int i=0;i<n;i++)
	{
		double a,b,c;
		cin>>a>>b>>c;
		double delta,x1,x2;
		delta=b*b-4*a*c;
		if(delta>0)
		{
		x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
		x2 = (-b - sqrt(b*b-4*a*c))/(2*a) ;
		cout<<"x1=";
		printf("%.5f", x1);
		cout<<";x2=";
		printf("%.5f",x2);
		cout<<endl;
		}
		else if(delta==0)
		{
			x1=(-b + sqrt(b*b-4*a*c))/(2*a) ;
			cout<<"x1=x2=";
			printf("%.5f", x1);
			cout<<endl;
		}
		else if(delta<0)
		{
			x1 = (-b)/(2*a) ;
			if(x1>-0.00001&&x1<=0)
				x1=-x1+0.0000001;
			double i;
			i=sqrt(-delta)/(2*a);
			cout<<"x1=";
			printf("%.5f", x1);
			cout<<"+";
			printf("%.5f", i);
			cout<<"i;x2=";
						printf("%.5f", x1);
						cout<<"-";
						printf("%.5f", i);
						cout<<"i"<<endl;
		}

	}
	return 0;
}
