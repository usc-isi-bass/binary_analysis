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
    char z[LEN],w[LEN];
    int len1,len2,i,j,l,flag=0;
    scanf("%s %s",z,w);
    len1=strlen(z);
    len2=strlen(w);
    for(i=0;i<len1;i++){
       for(j=0;j<len2;j++){
          if(z[i]==w[j]){
               l=j;
               for(i=0;i<len1;i++){
                  if(z[i]!=w[i+j]){
                                   flag=1;
                                   break;
                                   }
                                   }
               if(flag==0){
                           printf("%d\n",l);
                           }
                           }
                           }
                           }
           return 0;
}