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
   int m,n,k,i,j,t,g,f;  
   int a[9][9]={0};
   int b[9][9]={0};
   scanf("%d %d",&n,&m);
   a[4][4]=n;
   b[4][4]=n;
   for(k=0;k<m;k++)
   {
     for(i=4-k;i<=4+k;i++)
     {
       for(j=4-k;j<=4+k;j++)
       {
        for(t=i-1;t<=i+1;t++)
        {
          for(g=j-1;g<=j+1;g++)
          {
            a[t][g]+=b[i][j];                                                                             
          }
         }  
       }
     }  
     for(i=0;i<9;i++) 
     {
       for(j=0;j<9;j++) 
       {
         b[i][j]=a[i][j];
       }
     } 
    }
   for(i=0;i<9;i++) 
   {
     for(j=0;j<9;j++) 
     {
        if(j)printf(" ");              
        printf("%d",a[i][j]);
     }
     printf("\n");
   }
  getchar();
  getchar();
  getchar();
}                                                                                          
    
