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

int main() {
   int n,result,i;
   char zfc[21];
   scanf("%d",&n);
   while(n--){
     scanf("%s",zfc);
     if((zfc[0]>='A'&&zfc[0]<='Z')||(zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]=='_')){
       for(i=1;zfc[i]!='\0';i++){
          if((zfc[i]>='A'&&zfc[i]<='Z')||(zfc[i]>='a'&&zfc[i]<='z')||(zfc[i]=='_')||(zfc[i]>='0'&&zfc[i]<='9')){
              result=1;
          }else{
              result=0;
              break;         
          }
        }
     }else{
        result=0;
     }
     if(result==1){
        printf("yes\n");
     }else{
        printf("no\n");
     }
   }
   return 0;
}       