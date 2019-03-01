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
    int i,t,n;
    char f[101],g[101];
    for(i=0;i<101;i++){g[i]='\0';}
    gets(f);
    n=strlen(f);
    for(i=0,t=0;i<n;i++){
        if(f[i]!=' '){g[t]=f[i];t++;}
        else{if(f[i+1]!=' '){g[t]=' ';t++;}}
    }
    printf("%s",g);
    return 0;
}
