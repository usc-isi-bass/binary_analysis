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
    char a[300];
    gets(a);
    for(int k=200;k>0;k--){
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){if(a[i+1]==' '){
            for(int j=i+1;j<strlen(a)-1;j++)
            {a[j]=a[j+1];}
            a[strlen(a)-1]='\0';}
    
    }}}
    printf("%s",a);
return 0;}