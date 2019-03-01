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
  int n , i , j , t , x ;
  cin>>n;
  int a[n];
  for ( i=0;i<n;i++)
   {
     cin>>x;
     a[i]=x;
    }
  for( i=0;i<n;i++)
    { 
      for ( j=i+1;j<n;j++)
        {
           if (a[i]==a[j])
            {
              for ( t=j;t<n;t++)
               {
                 a[t]=a[t+1];
               }
               n--;
               j--;
            }
         }
     }
  for (i=0;i<n-1;i++)
    {
      cout<<a[i]<<" ";
    }
  cout<<a[n-1]<<endl;
  return 0;
}