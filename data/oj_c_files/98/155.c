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
    char str[400][45];
    int len[400];
    int *p;
    int k=0,sum=0;
    p=len;
    int n,i,j;
    cin>>n;
    for(i=0;i<=n-1;i++)
      cin>>str[i];
      
    for(i=0;i<=n-1;i++)  
    {
      len[i]=strlen(str[i]);                       
    }
    i=0;sum=0;k=0;
    
    while(i<=n-1)
    {
       if(k==0)
      {
       cout<<str[i];
       k++;
       sum=len[i]+sum;
       i++;
       } 
      else
      {
        if(sum+1+len[i]<=80)
        {
        cout<<" "<<str[i]; 
        k++;
        sum+=(1+len[i]);
        i++;          
        }  
        else
        {
         cout<<endl;
         k=0;sum=0;    
        }  
      }                  
                                     
    }
    
    
    
return 0;    
}