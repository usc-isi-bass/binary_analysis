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
    char str[11],substr[4],s[14];
    int i,j;
    while(scanf("%s",str)!=EOF)
    {
    scanf("%s",substr);
    int len;
    int jh=0;
    len=strlen(str);
    for(j=0;j<=len-1;j++)
    {
    if(str[j]>str[jh]) jh=j;
    }
    for(j=0;j<=jh;j++)
    {
    s[j]=str[j];
    }
    for(j=jh+1;j<=jh+3;j++)
    {
    s[j]=substr[j-jh-1];             
    }
    for(j=jh+4;j<=len+2;j++)
    {
    s[j]=str[j-3];
    }
    s[len+3]='\0';
    puts(s);
    printf("\n");
    }
}

