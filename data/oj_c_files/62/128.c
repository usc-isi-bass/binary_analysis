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
    int c,space=0;
    while(1){
        c = getchar();
        if(c == '\n'){break;}
        if(c == 32 && space == 0){
            putchar(c);
            space = 1;
        }
        else if(c != 32){
            putchar(c);
            space = 0;
        }
    }
    return 0;
}