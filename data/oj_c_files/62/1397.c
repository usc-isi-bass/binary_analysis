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
    char *p,*q;
    int i,j,k=0;
    char a[10000];
    gets(a);
    p=a;
    for(i=0;i<strlen(a);i++)
    {if(*p!=' ')
    {printf("%c",*p);k=0;}
    if(*p==' '&&k==0)
    {printf(" ");
    k++;}
    p++;
    }
}