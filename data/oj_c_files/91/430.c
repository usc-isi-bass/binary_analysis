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
    char qpstr(char a[]);
    char str[101];
    gets(str);
    qpstr(str);
    return 0;
}
char qpstr(char a[])
{
     int i,j,k,len;
     char b[101];
     for(i=0;i<strlen(a)-1;i++)
     b[i]=a[i]+a[i+1];
     b[strlen(a)-1]=a[strlen(a)-1]+a[0];
     b[strlen(a)]='\0';
     puts(b);
}