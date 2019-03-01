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
  int fj(int m,int min); 
  int t,i,a[100];
  cin>>t;
  for(i=1;i<=t;i++)
     {
       
       cin>>a[i];
       cout<<fj(a[i],2)<<endl;
     }
 
  return 0;
}
   int fj(int m,int min)
{
   int counter=1;
   int i;
   if(m<min)
     return 0;
     for(i=min;i<m;i++)
         if(m%i==0)
         {
           counter=fj(m/i,i)+counter; 
         }
   return counter;
   
}