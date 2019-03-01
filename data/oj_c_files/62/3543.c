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

int main (){
    int n,i,k=1,len;
    char zfc[201],sz[201]={0};
    gets(zfc);
    len=strlen(zfc);
    sz[0]=zfc[0];
    for(i=1;i<len;i++){
        if(zfc[i-1]==' '&&zfc[i]==' '){
        }else{
            sz[k]=zfc[i];
            k++;
        }
    }
    printf("%s",sz);
    return 0;
}


