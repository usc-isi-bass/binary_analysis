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
  int i,j;
 int k;
 double x[100];
 double *p=x;
  int n;
  double s,a;
  cin>>k;
  for(;k>=1;k--)
  {
	  cin>>n;
	  s=0;
	  a=0;
	  for(i=1;i<=n;i++)
	  {
		  cin>>*(p+i);
		  a+=*(p+i);
	  }
	  a=a/n;
	  for(i=1;i<=n;i++)
	  {
		  s=s+(*(p+i)-a)*(*(p+i)-a);
	  }
	  s=s/n;
	  s=sqrt(s);
	  cout<<fixed<<setprecision(5)<<s<<endl;
  }

  

  

 
 return 0;

}

