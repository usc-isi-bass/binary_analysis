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
    char s[101];
    char *p,*q;
    int i;
    gets(s);
    p=s;
    while(*p!='\0'){
        if(*p==' '){
            q=p+1;
            if(*q==' '){
                *p='!';
            }
        }
        p++;
    }
   
    i=0;
    while(s[i]!='\0'){
        if(s[i]!='!') printf("%c",s[i]);
        i++;
    }

    return 0;
}

