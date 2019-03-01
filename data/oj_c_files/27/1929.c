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
int n,m;
double a,b,c,x1,x2,i;
cin>>n;
for(m=1;m<=n;m++)//?????
{ cin >>a>>b>>c;
     if((b*b-4*a*c)>0)//???????
     {
    	 x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
         x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
         cout<<fixed<<setprecision(5)<<"x1"<<"="<<x1<<";"<<"x2"<<"="<<x2<<endl;
     }
     if((b*b-4*a*c)==0)//???????
    {
    	x1=x2=(-b) /(2*a);
    	cout<<fixed<<setprecision(5)<<"x1"<<"="<<"x2"<<"="<<x2<<endl;
	   }
     if((b*b-4*a*c)<0)//???????
      {
    	 x1=x2=(-b) /(2*a);
    	 i=fabs(sqrt(4*a*c-b*b)/(2*a));
    	 if (x1>(-0.000001)&& x2<0.000001)x1=x2=0;
    	cout<<fixed<<setprecision(5)<<"x1"<<"="<<x1<<"+"<<i<<"i"<<";"<<"x2"<<"="<<x2<<"-"<<i<<"i"<<endl;
      }
}
 return 0;
  }