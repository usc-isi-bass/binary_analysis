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
    int n;
    int a,b;
    int i,k,l;
    
    cin >> n;
    
    for(a=3;a<=n/2;a=a+2)
    {
       int j=0;                  
      for(i=2;i<a;i++)
      {
        if(a%i==0)
        {
         j++;
        }
        else ;
      }
      if(j>0)
      {
       continue;
       }
      else
      b=n-a;
      l=0;
      for(k=2;k<b;k++)
      {
        if(b%k==0)
        {
         l++;
        }
        else ;
      }
      if(l>0)
      {
      continue;
      }
      else
      cout << a << " " << b << endl;
      continue;
    }
    cin.get();cin.get();cin.get();
    return 0;
}
         
