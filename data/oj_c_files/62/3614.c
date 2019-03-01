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
    char juzi[200];   
    int i,j,m;
    gets(juzi);
    m=strlen(juzi);
    for(i=1;i<m-1;i++){
        if(juzi[i-1]!=' '&&juzi[i]==' '&&juzi[i+1]==' '){
            for(j=i+1;j<m-1;j++){
                juzi[j]=juzi[j+1];
            }
            m=m-1;
            juzi[m]='\0';
            i=i-1;
        }
    }
    printf("%s",juzi);
    return 0;
}


