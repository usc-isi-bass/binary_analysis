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
    char substr(char s[],int,int);
    char osubstr(char s[],int,int);
    int len,width,m;
    char s[1000];
    gets(s);
    len=strlen(s);
    for (width=1; width<=len; width++) {
        for (m=0; m<=len-width; m++) {
            if (substr(s, m, m+width)) {
                osubstr(s, m, m+width);
            }
        }
    }
    return 0;
}

char substr(char s[],int start,int end)
{
    while ((end>start)&&(s[start]==s[end])) {
        start++;
        end--;
    }
    if (end>start) {
        return 0;
    }
    else
        return 1;
}

char osubstr(char s[],int start,int end)
{
    while (start<=end) {
        putchar(s[start++]);
    }
    putchar('\n');
}