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


char s[300], subs[300], rep[300];

int ok(int wh)
{
    int i;
    for(i=wh; i<=wh+strlen(subs)-1; i++)
    {
        if(s[i]!=subs[i-wh])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int i, j, k, n, start;
    gets(s);
    gets(subs);
    gets(rep);
    start = -1;
    for(i=0; i<=strlen(s)-strlen(subs); i++)
        if(ok(i))
        {
            start = i;
            break;
        }
    if(start == -1)
    {
        puts(s);
        return 0;
    }
    for(i=0; i<start; i++)
    {
        printf("%c", s[i]);
    }
    for(i=0; rep[i]!='\0'; i++)
    {
        printf("%c", rep[i]);
    }
    for(i=start+strlen(subs); s[i]!='\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
