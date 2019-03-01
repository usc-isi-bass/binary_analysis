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

/*bss*/
int stack[MAX], lstack, len;

int main(){
    char c, a=0, b=0;
    int i, j, k;
    while(c=getchar()){
        if(!a) a=c;
        else if (c!=a&&!b) b=c;
        if(c==a) stack[lstack++]=len++;
        else if(c==b) printf("%d %d\n", stack[--lstack], len++);
        else return 0;
    }
}
