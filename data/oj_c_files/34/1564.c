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

int main ()
{
 int a,b,c;
 cin>>a;
 c=0;
 while (a!=1)
 {
  b=a%2;//??a????
  if (b)
  {
	  c=a*3+1;
      cout<<a<<"*"<<3<<"+"<<1<<"="<<c<<endl;
      a=c;//??a??????
   }
  else 
  {
	  c=a/2;
      cout<<a<<"/"<<2<<"="<<c<<endl;//a??????
      a=c;//??a??
  }
 }
 cout<<"End"<<endl;//???????End
 return 0;
}
