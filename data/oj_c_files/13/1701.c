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
    int n, a[30000], i, j, hash[30000];
    cin>>n;
    for( i = 1; i <= n; i++ )
      {
        cin>>a[i];
        hash[i]=1; 
      }
    cout<<a[1];
    for( i = 2; i <= n; i++ )
      {
           
        for(j=1; j<i ; j++)
          {
            if(a[i]==a[j])
              {
                hash[i]=hash[i]*0;
              }
            else
              {
                hash[i]=hash[i];
                
              }   
          }
      }
    for( i = 2; i <= n; i++ )
      {
        if(hash[i]==1)
        cout<<" "<<a[i];   
      }
    int b;cin>>b;
    return 0;  
    
    }
