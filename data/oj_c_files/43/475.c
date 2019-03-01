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
int m,i,j,k=0,a;//m???????i,j???? .k????1??????????????,a?????i??? 
cin>>m;
for(i=3;i<=(m/2);i=i+2)
    {
    k=0;
    a=m-i;
    for(j=2;j<i;j++)
         {
         if(i%j==0)k++;//?????????????? 
         }
    if(k==0)//???1???????????? 
         {
          k=0;                 
          for(j=2;j<a;j++)
                     {
                     if(a%j==0)k++;//?????????????? 
                     }
          if(k==0)//???1???????????? 
                      {
                      a=m-i;
                      cout<<i<<" "<<a<<endl;                    
                      }                                  
          }              
    }    
cin.get();
cin.get();
return 0;
}