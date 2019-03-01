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
   char zfc[6000];
   int i,j,k,m;
   gets(zfc);
   for(i=1;zfc[i]!='\0';i++){
       if(zfc[i]==' '&&zfc[i-1]==' '){
           for(k=i;zfc[k]!='\0';k++){
               zfc[k]=zfc[k+1];
           }
           i--;
       }
   }
   j=-1;;
   for(i=0;zfc[i]!='\0';i++){
       if(zfc[i]==' '){
           k=i-j-1;
           j=i;
           printf("%d,",k);
       }
   }
   m=strlen(zfc)-j-1;
   printf("%d",m);
   return 0;
}
        

