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
    char s[110][110];
    int j=0,i;
    while(scanf("%s",&s[j])!=EOF)
        j++;
    printf("%s",s[j-1]);
    for(i=j-2;i>=0;i--)
    printf(" %s",s[i]);
    printf("\n");
    getchar();
    getchar();
}
