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
   int sum;
   cin>>sum;
  
      if(sum>=100)
	  {
		  cout<<sum/100<<endl;
		  sum=sum-100*(sum/100);
	  }
	  else cout<<0<<endl;
	  if(sum>=50)
	  {
	      cout<<sum/50<<endl;
		  sum=sum-50*(sum/50);
	  }
	  else cout<<0<<endl;
	  if(sum>=20)
	  {
	     cout<<sum/20<<endl;
		 sum=sum-20*(sum/20);
	  }
	  else cout<<0<<endl;
	  if(sum>=10)
	  {
	     cout<<sum/10<<endl;
         sum=sum-10*(sum/10);
	  }
	  else cout<<0<<endl;
	  if(sum>=5)
	  {
	     cout<<sum/5<<endl;
		 sum=sum-5*(sum/5);
	  }
	  else cout<<0<<endl;
	  cout<<sum;
	  
   
   return 0;
} 
