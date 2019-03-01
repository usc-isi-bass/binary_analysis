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
   int n,k,x[1000];
   int i,j,sign=0;
   
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
      scanf("%d",&x[i]);                
   }    
   
   for(i=0;i<n;i++)
   {
       
       for(j=i+1;j<n;j++)
       {
           if((x[i]+x[j])==k)
           {
               sign=1;
               break;                  
           }                  
       }
                     
   }
   
   if(sign==1)
       printf("yes");
   else
       printf("no");
       
    scanf("%d%d",&n,&k);   
   return 0;
}
