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
{ int k,b,n,i;
  double a,m,x,y;
  cin>>k;
  cin>>a>>b;
  x=b/a;
  for (i=1;i<=(k-1);i++)  
  {
  cin>>m>>n;
  y=n/m;
  if (y-x>0.05)
	  cout<<"better"<<endl;
  if(x-y>0.05) 
	  cout<<"worse"<<endl;
  if(y-x<=0.05 & x-y<=0.05)
	  cout<<"same"<<endl;
  }
  return 0;
}