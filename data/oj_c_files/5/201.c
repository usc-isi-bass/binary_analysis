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
    char  sz[2][510];
    double a,e;
    int b,c,d,f;
    int s[2];
    d=0;
    scanf("%lf",&a);
    for(b=0;b<2;b++){
         scanf("%s",&sz[b]); 
         s[b]=strlen(sz[0]);
         for(f=0;f<s[b];f++){
              if(sz[b][f]!='A'&&sz[b][f]!='T'&&sz[b][f]!='G'&&sz[b][f]!='C'){
                      printf("error");
                      return 0;
              }
         }
    }
    if(s[0]!=s[1]){
        printf("error\n");
        return 0;
    }
   
    for(b=0;b<s[0];b++){
        if(sz[0][b]==sz[1][b]){
            d++;
        }
    }
    e=1.0*d/s[0];
    if(e>a){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}