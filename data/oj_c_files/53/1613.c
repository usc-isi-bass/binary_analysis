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
   int x[300],y[300]={0},i,j,k=0,n,sign;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&x[i]);                
   }
   for(i=0;i<n;i++)
   {
      for(sign=0,j=0;j<i;j++)
      {
         if(x[i]==x[j])
         {
            sign=1; 
            break;       
         }               
      }  
      if(sign==0)
      {
            y[k]=x[i];
            k++;  
      }
                
   }
   printf("%d",y[0]);
   for(i=1;i<k;i++)
   {
      printf(",%d",y[i]);                
   }    
   scanf("%d",&n);
   return 0;
}
