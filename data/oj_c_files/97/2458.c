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
  int n,i,a,b,c,d,e,f;//????
  cin>>n;//??
  i=n%100;//??100????
  a=(n-i)/100;
  n=i;
  i=n%50;//??50????
  b=(n-i)/50;
  n=i;
  i=n%20;//??20????
  c=(n-i)/20;
  n=i;
  i=n%10;//??10????
  d=(n-i)/10;
  n=i;
  i=n%5;//??5????
  e=(n-i)/5;
  f=i;//1????
  cout<<a<<endl;//????
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  cout<<f<<endl;

  return 0;
}
