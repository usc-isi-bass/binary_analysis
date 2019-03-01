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
    int a,Na,Nb,Nc;
    cin>>a;
    Na=a%3;
    Nb=a%5;
    Nc=a%7;
    if(Na==0&&Nb==0&&Nc==0)
      cout<<"3 5 7";
    else
      if(Na==0&&Nb==0)
         cout<<"3 5";
      else
         if(Na==0&&Nc==0)
            cout<<"3 7";
         else
             if(Nb==0&&Nc==0)
                cout<<"5 7";
             else
               if(Na==0)
                 cout<<"3";
               else
                 if(Nb==0)
                    cout<<"5";
                 else
                   if(Nc==0)
                     cout<<"7";
                   else
                     cout<<"n";
     return 0;
}