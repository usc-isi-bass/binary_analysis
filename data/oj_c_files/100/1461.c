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

int l;
char s[301];
int t[300]={0};
int main()
{
    int i,b=0;
    l=strlen(gets(s));
    for(i=0;i<l;i++)
    {
        t[s[i]]++;
    }
    for(i='A';i<='Z';i++)
    {
        if(t[i])
        {
            printf("%c=%d\n",i,t[i]);
            b=1;
        }
    }
    for(i='a';i<='z';i++)
    {
        if(t[i])
        {
            printf("%c=%d\n",i,t[i]);
            b=1;
        }
    }
    if(!b)
    {
        printf("No\n");
    }
    return 0;
}
