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
    const int MAXN = 300;
    char str[MAXN];
    gets(str);
    int i;
    printf("%c", str[0]);
    for (i = 1; i < strlen(str); ++ i)
        if (str[i - 1] == ' ' && str[i] == ' ')
           continue;
        else
            printf("%c", str[i]);
    printf("\n");
    return 0;
}
