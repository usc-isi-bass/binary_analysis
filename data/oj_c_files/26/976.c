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

int main () {
    char zf[101];
    int i;
    gets(zf);
    int l;
    l = strlen(zf);
    for(i=0;i<l;i++){
        if(zf[i]==' '){
           if(zf[i+1]==' '){
              zf[i+1] = '\0';           
           }      
        }
        if(zf[i]=='\0'){
           if(zf[i+1]==' '){
              zf[i+1] = '\0';           
           }             
        }
        if(zf[i]!='\0'){
           printf("%c",zf[i]);             
        }                                                    
    }
    return 0;
}