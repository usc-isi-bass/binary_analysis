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
    char s[101],c[101];
    gets(s);
    c[0]=s[0];
    int i,j;
    for(i=1,j=1;s[i]!='\0';i++){
        if(s[i]!=' '){
            c[j]=s[i];
            j++;
        }else{
            if(s[i-1]!=' '){
                c[j]=s[i];
                j++;
            }
        }
    }
    c[j]='\0';
    printf("%s",c);
    return 0;
}
