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


int main(int argc, char *argv[])
{
    char a[101];
    gets(a);
    int i;
    for(i=1;i<=strlen(a)-1;i++)
    printf("%c",a[i-1]+a[i]);
    printf("%c",a[strlen(a)-1]+a[0]);
    return 0;
}
