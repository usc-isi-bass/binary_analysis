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
    char s[101];
    char s1[101];
    gets(s);
    int a=(int)strlen(s);
    for (int b=0; b<a-1; b++) {
        s1[b]=s[b]+s[b+1];
    }
    s1[a-1]=s[a-1]+s[0];
    s1[a]='\0';
    printf("%s", s1);
    return 0;
}