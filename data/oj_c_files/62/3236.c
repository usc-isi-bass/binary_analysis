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

char il[MAX],ol[MAX];
int i,j=1;
int main()
{
    gets(il);
    ol[0]=il[0];
    for(i=1;il[i]!='\0';i++){
        if(il[i-1]!=' '||il[i]!=' '){
            ol[j]=il[i];
            j++;
        }
    }
    ol[j]='\0';
    puts(ol);
    return 0;
}