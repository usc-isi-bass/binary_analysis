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
double a,b,c,d,x,y;
int k;
cin>>k;
for(int i=1;i<=k;i++)
{cin>>a>>b>>c;
d=b*b-4*a*c;
if(d>=0)
{if(d<=0)
{y=-b/(2*a);
cout<<fixed;
	cout<<setprecision(5)<<"x1=x2="<<y<<endl;
}
else
{
d=sqrt(d);
x=(-b+d)/(2*a);
y=(-b-d)/(2*a);
cout<<fixed;
cout<<setprecision(5)<<"x1="<<x<<";x2="<<y<<endl;
}
}
else
{
d=sqrt(-d)/(2*a);
b=-b/(2*a);
if(b==0)
{
cout<<fixed;
cout<<setprecision(5)<<"x1=0.00000+"<<d<<"i"<<";x2=0.00000-"<<d<<"i"<<endl;
}
else
{
cout<<fixed;
cout<<setprecision(5)<<"x1="<<b<<"+"<<d<<"i"<<";x2="<<b<<"-"<<d<<"i"<<endl;
}
}
}
return 0;
}
