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
{int n=0;
double a=0,b=0,c=0,d=0;
cin>>n;
for(int i=1;i<=n;i++)
{cin>>a>>b>>c;
d=b*b-4*a*c;
if(b-0==0)
 {if(d-0>0)
   {cout<< fixed << setprecision(5) << "x1=0.00000+"<<sqrt(d)/(2*a)<<";"<<"x2=0.00000"<<-sqrt(d)/(2*a)<<endl;
    }
   if(d-0==0)
    {cout<<fixed << setprecision(5) << "x1=x2="<<-b/(2*a)<<endl;
    }
     if(d-0<0)
    {cout<<fixed << setprecision(5) << "x1=0.00000+"<<sqrt(-d)/(2*a)<<"i"<<";"<<"x2=0.00000-"<<sqrt(-d)/(2*a)<<"i"<<endl;
       }

}
else{
if(d-0>0)
   {cout<< fixed << setprecision(5) << "x1="<<-b/(2*a)+sqrt(d)/(2*a)<<";"<<"x2="<<-b/(2*a)-sqrt(d)/(2*a)<<endl;
    }
   if(d-0==0)
    {cout<<fixed << setprecision(5) << "x1=x2="<<-b/(2*a)<<endl;
    }
     if(d-0<0)
    {cout<<fixed << setprecision(5) << "x1="<<-b/(2*a)<<"+"<<sqrt(-d)/(2*a)<<"i"<<";"<<"x2="<<-b/(2*a)<<"-"<<sqrt(-d)/(2*a)<<"i"<<endl;
       }
}
   }
 
 return 0;
}
