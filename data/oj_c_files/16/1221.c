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
     int a,b,c,d;               
     cin>>a;
	 if(a>=1000)
          {
           b=a%1000;
           c=b%100;
           d=c%10;
           cout<<d<<(c-d)/10<<(b-c)/100<<(a-b)/1000<<endl;
           }
	 else if(a<1000&&a>=100)
	  {
	   b=a%100;
            c=b%10;
	   cout<<c<<(b-c)/10<<(a-b)/100<<endl;
	   }
	 else if(a<100&&a>=10)
	   {
	    b=a&10;
             cout<<b<<(a-b)/10<<endl;
	   }
	 else if(a>=0&&a<=9)
	  {
             cout<<a<<endl;
	  }
          return 0;
 }