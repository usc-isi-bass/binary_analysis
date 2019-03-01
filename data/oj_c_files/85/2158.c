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
      int n,e;
      scanf("%d",&n);
      char zfc[n][21];
      for(int i=0;i<n;i++){
          scanf("%s",zfc[i]);
      }
      for(int i=0;i<n;i++){
          e=strlen(zfc[i]);
          if((zfc[i][0]!='_')&&(zfc[i][0]>'Z'||zfc[i][0]<'A')&&(zfc[i][0]>'z'||zfc[i][0]<'a')){printf("no\n");}
          else{
              int t=0;
         for(int m=1;m<e;m++){
             if((zfc[i][m]=='_')||(zfc[i][m]>='a'&&zfc[i][m]<='z')||(zfc[i][m]>='A'&&zfc[i][m]<='Z')||(zfc[i][m]>='0'&&zfc[i][m]<='9')){
                 t++; 
             }
         } 
         if(t==e-1){printf("yes\n");}
         else{printf("no\n");}
         }
      }
       
      return 0;
      
  }



