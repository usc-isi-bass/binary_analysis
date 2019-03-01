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
  int n,k,i,temp;
  cin>>n>>k;
  int applestay;
  i=0;
  for(applestay=n-1;i<n;applestay=applestay+(n-1))
  {
  i=0;
  temp=applestay;
   for(;i<n;i++)
    {if(n*temp%(n-1)!=0) break;
      temp=n*temp/(n-1)+k;}
  }
 cout<<temp;
return 0;
}