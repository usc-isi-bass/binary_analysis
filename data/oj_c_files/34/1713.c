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


void jiao(double x);
double ji(double x);
double ou(double x);
int main()
{
    double n;
    cin>>n;
    jiao(n);
    
    return 0;
     }
void jiao(double x)
{     if(x==1) {cout<<"End"<<endl;return;}
      if((int)x%2==1) {x=ji(x);jiao(x);return;}
      if((int)x%2==0) {x=ou(x);jiao(x);return;}
      }
double ji(double x)
{
      cout<<x<<"*"<<3<<"+"<<1<<"="<<3*x+1<<endl;
      return 3*x+1;
}
double ou(double x)
{
      cout<<x<<"/"<<2<<"="<<x/2<<endl;
      return x/2;
}
