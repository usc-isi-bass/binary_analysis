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
    char str[30000];
    gets(str);
    int i,len,k=0,m=0;
    len=strlen(str);
    int kong[500];
    for(i=0;i<len;i++){
         if(str[i]==' '){
               kong[k]=i;
               k++;
         }
    }
    int chang[500];
    for(i=0;i<k-1;i++){
          chang[m]=kong[i+1]-kong[i]-1;
          m++;
    }
    if(k!=0){
    printf("%d,",kong[0]);
    for(i=0;i<m;i++){
        if(chang[i]!=0){
           printf("%d,",chang[i]);
        }
    }
    printf("%d",len-kong[k-1]-1);
    }else{printf("%d",len);}
return 0;
}