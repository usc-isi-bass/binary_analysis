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
    char str[1000],*p,*p1=str;
    int m,i;
    gets(str);
    m=strlen(str)-1;
    for(i=0;i<strlen(str)-1;i++)
    {
      p=&str[i];
      printf("%c",*p+*(p+1));
    }
    p=&str[m];
    printf("%c",*p+*p1);
    return 0;
}