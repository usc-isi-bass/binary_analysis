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
    int i,j,k,m,n,dmax,a[100],d[100];
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {  
                    scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    d[i]=1;
    
    
    
    for (i=n-2;i>=0;i--)
       {
                        for (j=i+1;j<n;j++)
                        {    
                             if((a[i]>=a[j])&&(d[i]<=d[j]))
                             {
                                  d[i]=d[j]+1;
                                                           
                                                           
                             }
                            
                            
                            
                            
                        }
       }
       
       
       
       dmax=0;
       for (i=0;i<n;i++)
       {  if(d[i]>dmax)
          dmax=d[i];
           
           
           
       }
    
    
    
    printf("%d\n",dmax);
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;   
}
