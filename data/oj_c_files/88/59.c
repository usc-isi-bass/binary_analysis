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
    int c,state = 0;
    while((c = getchar())!=EOF){
    switch(state){
    case 0:
        if(isdigit(c)){
            putchar(c);
            state = 1;
        }
        break;
    case 1:
        if(!isdigit(c)){
            putchar('\n');
            state = 0;
        }
        else putchar(c);
        break;
    }
    }
    return 0;
}