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
float a,b,c;
 cin>>n;
while(n>0){
	double x,y,xi,yi,d;
	cin>>a>>b>>c;
	d=b*b-4*a*c;                     //?????
	if(d>0)
		{x =(-b+sqrt(d))/(2*a) ;    //d>0?????
		y =(-b-sqrt(d))/(2*a) ;
		cout<<"x1="<<fixed<<setprecision(5)<<x<<";x2="<<fixed<<setprecision(5)<<y<<endl;
		}
	else if((d)==0)
		{x=(-b)/(2*a);
		cout<<"x1=x2="<<fixed<<setprecision(5)<<x<<endl;}            //d=0??????
	else
		{if(b!=0)
		x=(-b)/(2*a);
		else
			x=b/(2*a);
			xi=sqrt(-d)/(2*a);
	        yi=sqrt(-d)/(2*a);
		cout<<"x1="<<fixed<<setprecision(5)<<x<<"+"<<fixed<<setprecision(5)
	   <<xi<<"i;x2="<<fixed<<setprecision(5)<<x<<"-"
	   <<fixed<<setprecision(5)<<yi<<"i"<<endl;  }                      //d<0?????
        n--;

}

 return 0;

}

