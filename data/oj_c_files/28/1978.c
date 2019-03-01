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
    int n,i;
    char s[1000];
    gets(s);
    n=0;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==' '){
            if(s[i+1]!=' '){
                printf("%d,",n);
                n=0;
            }
            else{continue;}
        }
        else{
            n++;
        }
    }
    printf("%d",n);
    return 0;
}

