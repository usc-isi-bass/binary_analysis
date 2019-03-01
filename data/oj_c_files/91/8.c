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
    char s[110],*p;
    int len;
    gets(s);
    len=strlen(s);
    for(p=s;p<s+len;p++){
        if(p==s-1+len)
            printf("%c",(*p)+s[0]);
        else
            printf("%c",(*p)+*(p+1));
    }
    return 0;
} 
