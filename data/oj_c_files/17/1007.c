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

void match(char s[])
{
    char b[101];
    puts(s);
    int l,x=0,i,left[101];
    l=strlen(s);
    for(i=0;i<l;i++) b[i]=' ';b[l]='\0';
    for(i=0;i<l;i++)
        if(s[i]=='(') left[x++]=i;
        else if(s[i]==')')
            {
                if(x==0) b[i]='?';
                else x--;
            }
    for(i=0;i<x;i++) b[left[i]]='$';
    puts(b);
}
int main()
{
    char a[101];
    while((gets(a)))
    {
        match(a);
    }
}
