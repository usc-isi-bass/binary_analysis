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


int jiaogu(int a)
{
     if(a==1)
     {
             cout<<"End"<<endl;
             return 0;
     }
     else
     {
         if(a%2==0)
         {
               cout<<a<<"/"<<2<<"="<<a/2<<endl;;
               return jiaogu(a/2);
         }
         else
         {
             cout<<a<<"*"<<3<<"+"<<1<<"="<<(a*3+1)<<endl;
             return jiaogu(a*3+1);
         }
     }
}

int main()
{
    int number;
    cin>>number;
    jiaogu(number);
    return 0;
}
