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

int main (){
 int h,l,i,k,a,s[H][L];
 scanf("%d %d",&h,&l);
 
 for(i=0;i<h;i++){
     for(k=0;k<l;k++){
      scanf("%d",&(s[i][k]));
      
      
      }
      } 
 if(h<=l){
          a=2*h-1;
          }else{
          a=2*l;
          }           
 for(i=0;i<a;i++){
      if(i%4==0){
         for(k=i/4;k<=l-1-i/4;k++){
             printf("%d\n",s[i/4][k]);
             
             }
      }else if(i%4==1){
         for(k=i/4+1;k<=h-1-i/4;k++){
             printf("%d\n",s[k][l-1-i/4]);
             
             }
      }else if(i%4==2){
         for(k=l-2-i/4;k>=i/4;k--){
             printf("%d\n",s[h-1-i/4][k]);
                      
             }      
      }else{
         for(k=h-2-i/4;k>=(i+1)/4;k--){
             printf("%d\n",s[k][i/4]);         
             
             }  
      }     
}                                                   
 return 0;
}