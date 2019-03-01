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
double a ,b ,c;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>a>>b>>c;
if(sqrt(b*b-4*a*c)>0)
cout<<fixed<<setprecision(5)<<"x1="<<(-b+1-1 + sqrt(b*b-4*a*c))/(2*a)<<";x2="<<(-b+1-1- sqrt(b*b-4*a*c))/(2*a)<<endl;
else if(sqrt(b*b-4*a*c)==0)
cout<<fixed<<setprecision(5)<<"x1=x2="<<(-b +1-1+ sqrt(b*b-4*a*c))/(2*a)<<endl;
else
cout<<fixed<<setprecision(5)<<"x1="<<(-b+1-1)/(2*a)<<"+"<<sqrt(-b*b+4*a*c)/(2*a)<<"i;x2="<<(-b+1-1)/(2*a)<<"-"<<sqrt(-b*b+4*a*c)/(2*a)<<"i"<<endl;
}
return 0;
}