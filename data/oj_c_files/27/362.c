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
{int i,n;
 cin>>n;
 double a,b,c,sum,del;
 for(i=0;i<n;i++)
{cin>>a>>b>>c;
 del=b*b-4*a*c;
if(del==0)
cout<<"x1=x2="<<fixed<<setprecision(5)<<-b/2/a<<endl;
if(del>0)
cout<<"x1="<<fixed<<setprecision(5)<<(-b+sqrt(del))/2/a<<";"<<"x2="<<fixed<<setprecision(5)<<(-b-sqrt(del))/2/a<<endl;
if(del<0)
{if (b!=0)
cout<<"x1="<<fixed<<setprecision(5)<<-b/2/a<<"+"<<fixed<<setprecision(5)<<sqrt(-del)/2/a<<'i'<<";""x2="<<fixed<<setprecision(5)<<-b/2/a<<"-"<<fixed<<setprecision(5)<<sqrt(-del)/2/a<<'i'<<endl;
if (b==0)
cout<<"x1="<<0.00000<<"+"<<fixed<<setprecision(5)<<sqrt(-del)/2/a<<'i'<<";"<<"x2="<<0.00000<<"-"<<fixed<<setprecision(5)<<sqrt(-del)/2/a<<'i'<<endl;}
}
return 0;}