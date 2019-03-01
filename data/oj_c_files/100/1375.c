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
  int i,n,m=0,t=0;
  char k,s[300];
  scanf("%s",s);
  n=strlen(s);
    for(k='a';k<='z';k++){
          for(i=0;i<n;i++){
              if(s[i]==k){
                m++;
              }
          }
        if(m!=0){
           printf("%c=%d\n",k,m);
              t++;
         } 
       m=0;
    
    }
            if(t==0){
            printf("No");
        }
    return 0;
}
