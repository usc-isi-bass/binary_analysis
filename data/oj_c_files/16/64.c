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
    int i,l;
    char s[4],r[4];
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
      r[i]=s[l-1-i];
    }
    for(i=0;i<l;i++)
    printf("%c",r[i]);
    getchar();
    getchar();
}