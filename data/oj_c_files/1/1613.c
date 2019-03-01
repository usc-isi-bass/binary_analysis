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


int fenjie(int num,int min);
int k=2;
int main(){
     int n,i,jieguo,num;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
          scanf("%d",&num);
         jieguo=fenjie(num,2);
         printf("%d\n",jieguo);
        }
     return 0;
    }

int fenjie(int num,int min){
       int j,jieguo=1;
      
      if(num<min){
         return 0;
         }

      for(j=min;j<num;j++){
         
         if(num%j==0){
            
            jieguo+=fenjie(num/j,j);
           }
        }
      return jieguo;
   }