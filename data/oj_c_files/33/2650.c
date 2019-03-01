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

int main(){
    int i,n,k,len;
    char jj[1000][256];
     scanf("%d",&n);
     for(i=0;i<n;i++){
      scanf("%s",jj[i]);
      
      len=strlen(jj[i]);
      for(k=0;k<len;k++){
       if(jj[i][k]=='A'){
          jj[i][k]='T';               } 
       else if(jj[i][k]=='T'){
          jj[i][k]='A';               
                         } 
        else if(jj[i][k]=='C'){
          jj[i][k]='G';                                      
                         }
        else if(jj[i][k]=='G'){
          jj[i][k]='C';                                   
                      }
                      }
                      }
     for(i=0;i<n;i++){
       printf("%s",jj[i]);
        printf("\n");             
                      } 
                      scanf("%d",&k);                
     return 0;              
    }
