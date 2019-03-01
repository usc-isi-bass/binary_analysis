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
 int F(int);             //??????k????
 int n;                  //n????????
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  int k;
  cin>>k;
  cout<<F(k)<<endl;
 }
 return 0;
}
int F(int k)
{
if(k==1||k==2)
 return 1;
 int a=1,b=1,c;
 for(int i=3;i<=k;i++)
 {
  c=a+b;                     //??????????c?
  a=b;b=c;
 }
 return b;
}
