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
    char a[100];
    gets(a);
    int n=strlen(a);
    int i;
    char b;
    for(i=0;i<n-1;i++){
                       b=a[i]+a[i+1];
                       printf("%c",b);
                       }
    printf("%c",a[n-1]+a[0]);
    return 0;
}
