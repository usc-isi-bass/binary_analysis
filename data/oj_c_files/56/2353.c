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
   int a,b=0,c=0;

   cin>>a;
   b=a%10;
   a=a/10;
   for(;b!=0;)
   { 
       c=c*10+b;
       b=a%10;
       a=a/10;
      
    }
   cout<<c;
    return 0;
}
