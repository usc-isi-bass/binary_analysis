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
	int n,ni;
	cin>>n;
    for(ni=1;ni<=n;ni=ni+1)
	{
		double a,b,c,x1,x2,t;
		cin>>a>>b>>c;
		t=(-b)/(2*a);
		if(fabs(t) < 1e-9)
         t= 0;
		if (b*b-4*a*c>0)
		{
			cout<<"x1=" ;
            printf("%.5f",(t + sqrt(b*b-4*a*c)/(2*a)));
            cout<<";";
		    cout<<"x2=";
            printf("%.5f",(t - sqrt(b*b-4*a*c)/(2*a)));
            cout<<endl;
        }
		else if (b*b-4*a*c==0)
		{
			cout<<"x1=x2=";
            printf("%.5f", t);
            cout<<endl;
		}
		else
        {   
			cout<<"x1=";
            printf("%.5f", t);
            cout<<"+";
            printf("%.5f",(sqrt(4*a*c-b*b)/(2*a)));
            cout<<"i;";
		    cout<<"x2=";
            printf("%.5f",t);
            cout<<"-";
            printf("%.5f",(sqrt(4*a*c-b*b)/(2*a)));
            cout<<'i'<<endl;
		}
	}
	return 0;
}

