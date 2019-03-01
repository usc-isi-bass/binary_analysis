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

int i,n;
char str[21],*q;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str);
        q=str;
        if((*q!=95)&&((*q<65)||(*q>90)&&(*q<97)||(*q>122))){
            printf("no\n");
            continue;
        }
        
        else{
          q++;
          while(*q!='\0'){
            if((*q!=95)&&((*q<48)||(*q>57)&&(*q<65)||(*q>90)&&(*q<97)||(*q>122))){
                printf("no\n");
                break;
            }
            q++;
          }
        if(*q=='\0')
            printf("yes\n");
        }
    }

//scanf("%d",&i);
return 0;
}
