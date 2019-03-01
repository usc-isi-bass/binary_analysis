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
    int i;
    char s[101],s1[101];
    gets(s);
    for(i=0;i<strlen(s);i++){
    if(i<strlen(s)-1)
        s1[i]=s[i]+s[i+1];
    if(i==strlen(s)-1)
        s1[i]=s[i]+s[0];
    }
    s1[strlen(s)]=0;
    puts(s1);
    return 0;
}
