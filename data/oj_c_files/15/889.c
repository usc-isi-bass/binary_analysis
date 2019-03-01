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
 int n,i,k,e=-1,r,row1,row2,rol1,rol2,s[h][l];
 scanf("%d",&n);
 getchar();
 for(i=0;i<n;i++){
     for(k=0;k<n;k++){
      scanf("%d",&(s[i][k]));
      getchar();
      }
      }         
 for(i=0;i<n;i++){
      for(k=0;k<n;k++){
            if(s[i][k]==0&&e<0){
                e+=1;
                row1=i;
                rol1=k;
                }else if((s[i][k]==0)&&(e>=0)){
                row2=i;
                rol2=k;
                }   
      } 
      }
  r=(row2-row1-1)*( rol2-rol1-1);
  printf("%d",r);                                                  
 return 0;
}