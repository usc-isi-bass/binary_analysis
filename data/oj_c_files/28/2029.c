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
    char sen[300*20];
    int i,k=0,wordlen=0,a[300];
    gets(sen);
    for(i=0;i<strlen(sen);i++){
        if(sen[i]==' '){
            if(wordlen!=0){a[k]=wordlen;
            k++;}
            wordlen=0;
        }else{wordlen++;}
    }a[k]=wordlen;
    for(i=0;i<k;i++){
        printf("%d,",a[i]);
    }printf("%d",a[k]);
        return 0;
    }

