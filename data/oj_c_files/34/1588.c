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
 int inta=0,i,a=0,b=0;//inta????????i?????
	  cin>>inta;
	  for(i=0;;i++)
	  {
		  if(inta%2==0)
		  {
			  
			  a=inta/2;
			  cout<<inta<<"/2="<<a<<endl;
			  inta=a;
		  }
		  
		  if(inta%2!=0&&inta!=1)
		  {
			  
			  b=inta*3+1;
			  cout<<inta<<"*3"<<"+1="<<b<<endl;
			  inta=b;
		  }
		  
		  if(inta==1)
		  {
			  break;
			  
		  }
			 
	  }

cout<<"End";  
  
   cin.get();cin.get();cin.get();cin.get();
   return 0;
}