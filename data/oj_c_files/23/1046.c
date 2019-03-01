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
    char a[100][101],temp[101];
    int c=0;
    while(scanf("%s",a[c])!=EOF)
    c++;
    for(int i=c-1;i>0;i--)
printf("%s ",a[i]);
printf("%s",a[0]);
}