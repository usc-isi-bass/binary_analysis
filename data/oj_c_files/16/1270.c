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

int main(void)
{

    char a[10];
    int i=0;
    int n;
    while((a[i]=getchar())!='\n')
        i++;
    n = i;
        for(i=n;i>=0;i--)
    printf("%c",a[i]);
    return 0;
}