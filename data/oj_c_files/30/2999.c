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
  int i,n;
  long sum;
  
  cin>>n;
  sum=0;//?????7????????
  for(i=1;i<=n;i++)
   if(i%7==0||i%10==7||i/10==7) sum+=i*i;
  sum=n*(n+1)*(2*n+1)/6-sum;
  cout<<sum;
  return 0;
}