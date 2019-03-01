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

char swap(char str[100])
{
    int n,i,j;
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    if(str[i]==' ') break;
    for(j=i+1;j<n;j++) printf("%c",str[j]);
    if(i>0)
    {
    printf(" ");
    str[i]='\0';
    swap(str);
    }
}
int main()
{
    char str[101];
    gets(str);
    swap(str);
}