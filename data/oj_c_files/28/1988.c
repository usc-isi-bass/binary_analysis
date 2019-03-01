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
    char zfc[5000];
    int i,sz[1000]={0},j=0,k;
    gets(zfc);
    for(i=0;zfc[i]!='\0';i++){
        if(zfc[i]!=' '){
           sz[j]++;
        }
        if(zfc[i]==' '&&zfc[i+1]!=' '){
            j++;
        }
    }
    for(k=0;k<j;k++){
    printf("%d,",sz[k]);
    }
    printf("%d",sz[j]);
    return 0;
}
