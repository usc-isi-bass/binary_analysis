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
    int m,i,j;
    scanf("%d",&m);
    char ba[m];
    for(j=0;j<m;j++){
    scanf("%s",ba);
    for(i=0;ba[i]!='\0';i++){
        if(i==0){
            if(!((ba[i]>='a'&&ba[i]<='z')||(ba[i]>='A'&&ba[i]<='Z')||ba[i]=='_')){printf("no\n");
                  break;
          }}
        if(i!=0){
            if(!((ba[i]>='a'&&ba[i]<='z')||(ba[i]>='A'&&ba[i]<='Z')||(ba[i]>='0'&&ba[i]<='9')||ba[i]=='_')){
                printf("no\n");
                break; }
        }
        if(ba[i+1]=='\0'){printf("yes\n");}
    }   
    }
    return 0;
}