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
      int n,i,a[1000],b=0;
      cin>>n;
      for(i=0;i<n;i++)
          {
            a[i]=i+1;
            
            if(a[i]%10==7 )
                 b = b;  
            else if(a[i]%7==0)
                 b = b;  
            else if(69<a[i]&&80>a[i])
                 b = b;
            else b=b+a[i]*a[i];            
          }
      cout<<b;
      int c;cin>>c;
      return 0;
      
      
      
      } 