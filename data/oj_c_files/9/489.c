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
   char id[100][10];
   int n,age[100],i,k=0,m,len,p;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%s %d",&(id[i]),&(age[i]));
   }
   char e[100][10],kong[10];
   int xin[100];
   for(i=0;i<n;i++){
       if(age[i]>59){
           xin[k]=age[i];
           strcpy(e[k],id[i]);
           k++;
       }
   }
   len=k;
   for(m=1;m<=len;m++){
       for(k=0;k<len-m;k++){
            if(xin[k]<xin[k+1]){
                  p=xin[k];strcpy(kong,e[k]);
                  xin[k]=xin[k+1];strcpy(e[k],e[k+1]);
                  xin[k+1]=p;strcpy(e[k+1],kong);
            }
        }
    }
    for(k=0;k<len;k++){
         printf("%s\n",e[k]);
    }
    for(i=0;i<n;i++){
       if(age[i]<60){
          printf("%s\n",id[i]);
       }
    }
return 0;
   }