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
{  int N,i,j,k=0,flag=0,a[10000];
   scanf("%d",&N);
   if(N<5)
         printf("empty");
   else{
      for(i=3;i<=N;i+=2,flag=0){
         for(j=2;j<sqrt((const double)i)+1;j++){
             if(i%j==0){
                flag=1;
                break;
             }
         }
         if(flag==0){       
            a[k]=i;
            k++; 
         } 
      }
      
   
      for(k=0;a[k]!=0;k++){
          if(a[k+1]==a[k]+2)
              printf("%d %d\n",a[k],a[k+1]); 
      }
   }
   
return 0;
} 
