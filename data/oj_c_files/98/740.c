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
{  char a[1000][42];
   int sum,i,j,k,n,m;
   cin>>n;
   sum=0;
   for (i=1;i<=n;i++)
        {cin >>a[i]; 
         m=strlen(a[i]);
         if (sum+m+1<=80) 
             if (sum!=0)
                  { cout<<" "<<a[i];
                    sum=sum+m+1; 
                    }
              else { cout<<a[i]; 
                     sum=sum+m; 
                      }        
         else { cout<<endl;
                cout<<a[i];
                sum=0;
                sum=sum+m;         
                   }   
         }
    return 0;   
    
    
    
    
    
    
    }
