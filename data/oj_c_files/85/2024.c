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
    char zf[1000][21];
    int jg[1000];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s", zf[i]);
    }
    for(int i=0;i<n;i++){
        for(int t=0;t<strlen(zf[i]);t++){
          if((zf[i][t]>='0')&&(zf[i][t]<='9')){jg[i]=jg[i]+1;}
          if((zf[i][t]>='a')&&(zf[i][t]<='z')){jg[i]=jg[i]+1;}
          if((zf[i][t]>='A')&&(zf[i][t]<='Z')){jg[i]=jg[i]+1;}
          if(zf[i][t]=='_'){jg[i]=jg[i]+1;}
        }}
   for(int i=0;i<n;i++){
         if((zf[i][0]>='0')&&(zf[i][0]<='9')){jg[i]=jg[i]-1;}}
    for(int i=0;i<n;i++){if(jg[i]==strlen(zf[i])){
    printf("yes\n");}else{printf("no\n");}
    }
    return 0;
}

