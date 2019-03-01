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
    char s[102],w[102];
    int i,ls;
    gets(s);
    
    ls=strlen(s);
    memset(w,0,sizeof(w));
    
    for(i=0;i<ls;i++){
                      if(i<ls-1){
                                  w[i]=s[i]+s[i+1];
                                  }
                      else if(i==ls-1){
                           w[ls-1]=s[ls-1]+s[0];
                           }
                      }
    
    puts(w);
    scanf("%d",&i);
    return 0;
                                                            
} 