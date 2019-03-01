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


int main()
{
    char str[1005];
    int i,cnt,n;
    char c=0;
    gets(str);
    n=strlen(str);
    for (i=0;i<n;i++){
        if (c!=toupper(str[i])){
            if (c){
                printf("(%c,%d)",c,cnt);
            }
            cnt=1;
            c=toupper(str[i]);
            continue;
        }
        cnt++;
    }
    printf("(%c,%d)\n",c,cnt);
    return 0;
}