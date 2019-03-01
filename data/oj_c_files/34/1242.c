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
    int n,i,a,b;
    cin>>n;
    if (n!=1)
    {                                     //??????n 
    if (n%2==0)
       {
        a=n/2;
        cout<<n<<"/"<<2<<"="<<a<<endl;          //?????? 
       }
    else
        {
         a=n*3+1;
         cout<<n<<"*"<<3<<"+"<<1<<"="<<a<<endl; //?????? 
        }
    for (i=1; ;i++)
        {
         if (a%2==0)
            {
             b=a/2;
             cout<<a<<"/"<<2<<"="<<b<<endl;     //?????? 
             a=b;
            }
         else 
              {
               b=a*3+1;
               cout<<a<<"*"<<3<<"+"<<1<<"="<<b<<endl;
               a=b;                                  //?????? 
              }
         if (a==1)
            break;                                   //????1?????? 
        }
    cout<<"End"<<endl;                               //??????End 
    }
    else 
         {
          cout<<"End"<<endl;
         }
    return 0;
}
