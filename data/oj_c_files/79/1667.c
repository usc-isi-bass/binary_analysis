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


main() 
  {   
      int m,n,i,t,p,f,k,q,c,add;
    int str[300]; 
  for (;;)
{     
      scanf("%d %d",&n,&m);
    if(n==0&&m==0)
    break;
     //printf("%d %d\n",n,m);
     for(i=0;i<n;i++)
     str[i]=1;  
       
     i=-1;
          
          
     for(t=1;t<n;t++)
  {    
          
          add=m;
         // printf("%d",add);
              k=0;
         for(p=i+1;;p++)
      {  
                     
              // printf("%d\n",p);
              
           k=k+1;
          // printf("%d\n",k);
           if (p>=n)
         {
                    p=p-n;
               // printf("%d\n",p);
         }
           if(str[p]==0)
           {
                        add=add+1;
           //printf("%d\n",add);
           }
           if(k>=add)
           break;
     
      }             
       //printf("%d\n",add); 
       i=i+add;
      
       if(i>n-1)
       i=i%n;
       str[i]=0;
}   
       for(f=0;f<=n-1;f++)
         {
         if(str[f]==1)
         printf("%d\n",f+1);
         }
}         
                 
  
} 
