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
    char a[100],z;
    int n,q,w,e;
    gets(a);
    n=strlen(a);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==' '){
           if(a[i-1]==' '){
            for(w=i;a[w]!='\0';w++){a[w]=a[w+1];}i--;
            } 
            }
        }
    puts(a);
    return 0;
}


