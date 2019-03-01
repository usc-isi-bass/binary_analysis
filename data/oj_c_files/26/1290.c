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
    char sz[100];
    int i,n,x;
   gets(sz);
n=strlen(sz);
for(i=0;i<n-1;i++){
    if(sz[i]==' '){
        if(sz[i+1]==' '){
            continue;
        }
        else{
            printf(" ");
        }
    }
    else{
        printf("%c",sz[i]);
    }
}
printf("%c",sz[n-1]);
return 0;
}

