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
    int isfirst=1;
    char word[1000];
    while(scanf("%s",&word)!=EOF)
    {
        if(isfirst==1)
        {
            isfirst=0;
        }
        else
        {
            printf(",");
        }
        printf("%d",strlen(word));
    }
    printf("\n");
    return 0;
}
