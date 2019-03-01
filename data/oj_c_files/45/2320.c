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


int Find(char *tgt, char *src)
{
    int len_t, len_s, i, j=0;
    len_t=strlen(tgt);
    len_s=strlen(src);
    
    for(i=0; i<len_s; i++)
    {
        if(*(tgt+j)==*(src+i))
            j++;
        else
            j=0;
        if(j==len_t)
            return (i-j);
    }
}

int main()
{
    int i, len;
    char tgt[50], src[50];

    scanf("%s %s", tgt, src);

    printf("%d\n", Find(tgt, src)+1);

    return 0;
}