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
 int n,len=0,temp[6];
 cin>>n;
if(n==0) cout<<n;
 while(n>0)
 {
  temp[len++]=n%10;
   n=n/10;
  }
  for(int i=0;i<len;i++)
  cout<<temp[i];
  return 0;
}