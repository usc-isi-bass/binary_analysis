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
    int n,i,j,k,c,m;
    scanf("%d",&n);
    int a[100000]; 
    for(i=0;i<n;i++)
    { 
        scanf("%d",&a[i]);
    } 
    scanf("%d",&k); 
    c=0;
    m=n;
   
        for(i=0;i<m;i++)
        {
            if(a[i]==k)
            {
                for(j=i;j<m;j++) 
                a[j]=a[j+1];
                c+=1; 
                m-=1;
                i--;       
            }  
        }   
    
        for(i=0;i<n-c-1;i++) 
        { 
        printf("%d ",a[i]);
        }
        printf("%d",a[n-c-1]);
    
      
        scanf("%d",&n);       
    return 0;  
}