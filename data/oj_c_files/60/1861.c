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
    int N,n,m,k,j,i,a,r=0;
    scanf("%d",&N);
    for(n=2;n<=(N-2);n++)
          {k=sqrt(n);
           for(i=2;i<=k;i++)
             if(n%i==0)break;
           if(i>=k+1)
               {
                 m=n+2;
                 j=sqrt(m);
                   for(a=2;a<=j;a++)
                 
                   if(m%a==0)break;
                   if(a>=j+1)
                   {
                   printf("%d %d\n",n,m);
                   r=r+1;
                   }    
               }  
           }     
     
     if(r==0)
     printf("empty");
 
}                   