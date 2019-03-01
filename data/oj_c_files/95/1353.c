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
    int i;
    int cmp;
    char s1[max+1],s2[max+1];
    gets(s1);
    gets(s2);
    for(i=0;s1[i];i++)
    {
        if(s1[i]>='a'&&s1[i]<='z')
            s1[i]-='a'-'A';
    }
    for(i=0;s2[i];i++)
    {
        if(s2[i]>='a'&&s2[i]<='z')
            s2[i]-='a'-'A';
    }
    cmp=strcmp(s1,s2);
    if(cmp>0)
        printf(">");
    if(cmp==0)
        printf("=");
    if(cmp<0)
        printf("<");
    return 0;
}