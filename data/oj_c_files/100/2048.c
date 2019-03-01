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
       int k,a,i=1,j,x=0;
       char sc[100][2],zfc[300];
       scanf("%s",zfc);

       int e;

       for(k=1;k<strlen(zfc);k++){
               for(int a=0;a<strlen(zfc)-k;a++){
                       if(zfc[a]>zfc[a+1]){
                               e=zfc[a+1];
                               zfc[a+1]=zfc[a];
                               zfc[a]=e;

                       }
               }
       }

   for(j=0;j<strlen(zfc);j++){
               i=1;
               while(zfc[j]==zfc[j+1]){
                               j++;
                               i++;
               }
       if(((zfc[j]>=65)&&(zfc[j]<=90))||((zfc[j]>=97)&&(zfc[j]<=122))){
                       printf("%c=%d\n",zfc[j],i);
                       x++;
               }

       }
       if(x==0){
               printf("No\n");
       }

       return 0;
}
