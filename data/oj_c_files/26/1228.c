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
    char a[101];
    gets(a);
    int i,k;
    for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
        for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
   for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
       for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
       for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
       for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
       for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
       for(i=0;a[i]!='\0';i++){
        if(a[i]==32&&a[i+1]==32){
            for(k=i;a[k]!='\0';k++){
            a[k+1]=a[k+2];
            }
        }
    }
    puts(a);
    return 0;
}
