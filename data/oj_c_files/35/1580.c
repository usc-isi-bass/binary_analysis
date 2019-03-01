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

int main ()
{
   int sz[8][8];
   int i,m,n,k,max,min,p,x,y;
   scanf("%d,%d",&m,&n);
   for(i=0;i<m;i++){
      for(k=0;k<n;k++){
          scanf("%d",&sz[i][k]);
        }
    }
   for(i=0;i<m;i++){
      int max=0;
      for(k=0;k<n;k++){
         if(sz[i][k]>max){
           max=sz[i][k];
           y=k;
          }
        }
	  int min=100;
      for(p=0;p<m;p++){
          if(sz[p][y]<min){
              min=sz[p][y];                     
              x=p; 
             }
           }
         if(max==min){
         printf("%d+%d",x,y);
         return 0;
        }
    }
    printf("No");
    return 0;
}

