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
    char s[100];
    char i=0;
    scanf("%s",&s);
    i=strlen(s);
    printf("%d",i);
    while(scanf("%s",&s)!=EOF)
    {
        i=strlen(s);
        printf(",%d",i);
    }
    getchar();
    getchar();
}
