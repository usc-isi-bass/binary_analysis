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
	int n,a,b,c,d;
	cin>>n;
	a=n/1000;
	  if(a!=0)
	  {
		  b=n/100-10*a;
		  c=n/10-100*a-10*b;
		  d=n-1000*a-100*b-10*c;
		  cout<<d<<c<<b<<a<<endl;
	  }
	  else if(n/100!=0)
      {
		  b=n/100;
		  c=n/10-b*10;
		  d=n-100*b-10*c;
		  cout<<d<<c<<b<<endl;
	  }
	  else if(n/10!=0)
	  {
		  c=n/10;
		  d=n-c*10;
		  cout<<d<<c<<endl;
	  }
	  else
		  cout<<n<<endl;
	  return 0;
}