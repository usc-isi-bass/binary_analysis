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
   int m,a,b,c,d,e,f;
   cin>>m;
   a=m%100;
   b=a%50;
   c=b%20;
   d=c%10;
   e=d%5;
   cout<<(m-a)/100<<'\n'<<(a-b)/50<<'\n'<<(b-c)/20<<'\n'<<(c-d)/10<<'\n'<<(d-e)/5<<'\n'<<e<<endl;
   return 0;
}