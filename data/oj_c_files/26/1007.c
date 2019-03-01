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
    char  cs[300],jg[200]={'\0'};
    gets(cs);
    int i,t=0,m;
    for(i=0;cs[i]!='\0';i++){
                             if(cs[i]!=' '){
                                         jg[t]=cs[i];
                                         t++;
                                         }
                             else{
                                  jg[t]=' ';
                                  t++;
                                  for(m=1;cs[i+m]==' ';m++);
                                  i+=m-1;
                                  }
                                  } 
    printf("%s",jg);
    
    return 0;
}