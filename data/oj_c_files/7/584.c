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
    char s[256],w[256],z[256];
    int ls,lw,t,lz;
    int i,j,loc=-1;
    scanf("%s%s%s",w,s,z);
    ls=strlen(s);
    lw=strlen(w);
    lz=strlen(z);
    for(i=0;i<lw;i++){
                  t=0;
                  for(j=0;j<ls;j++){
                                    if(w[i+j]==s[j])
                                    t++;
                                    }
                  if(t==ls){
                  loc=i;
                  break;
                 }
    }

    if(loc!=-1){
    for(i=0;i<loc;i++){
                       printf("%c",w[i]);
                       }


    printf("%s",z);
    for(i=loc+lz;i<lw;i++){
                         printf("%c",w[i]);
                         }
    }
    else{
         puts(w);
         }
                      
                         
                          
    
        return 0;
}