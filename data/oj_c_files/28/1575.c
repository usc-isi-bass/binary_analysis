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
    int len;
    char sp,word[300][20];
    for(int i=0;i<300;i++){
         scanf("%s%c",word[i],&sp);
         len=strlen(word[i]);
         if(len==0){
             break;
                      }
          if(i==0){ 
            printf("%d",len);
           }else{printf(",%d",len);}
         }
            return 0;
    } 


