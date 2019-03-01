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
    int k,a,i;
    cin>>a;
    if(a==1)
    cout<<"End"<<endl;
    if(a!=1)
    {for(i=0;a!=1;i++)
     {
         
         if (a%2==1)
           {
                    k=a*3+1;
                    cout<<a<<"*"<<"3"<<"+"<<"1"<<"="<<k<<endl;
           }
         else
           {
                    k=a/2;
                    cout<<a<<"/"<<"2"<<"="<<k<<endl;
           }
           a=k;
         if(k==1)
         {cout<<"End"<<endl;
         break;}
         
     }
    }
    return 0;
}