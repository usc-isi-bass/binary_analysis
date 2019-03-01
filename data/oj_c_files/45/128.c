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
    int i, j, t, a, ls, lw;
    char s[50], w[50];
    scanf("%s %s", s, w);
    ls=strlen(s);
    lw=strlen(w);
    for(j=0;j<lw;j++)
    {
        if(s[0]==w[j])
        {
            t=0;
            a=j;
            for(i=0;i<ls;i++)
            {
               if(s[i]!=w[j+i]) t=1;break; 
            }
        }
        if(t==1) break;
        if(t==0) break;
    }
    printf("%d\n", a);
    return 0;
}