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
    int n,i,r=0;
    scanf("%s",&a);
    i=strlen(a);
    printf("%d",i);
    while(scanf("%s",&a)!=EOF)
    {
        i=strlen(a);
        printf(",%d",i);
    }
    printf("\n");
}