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
    char s1[101],s2[101];
    int l,i,j;
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
                    if(i!=l-1)
                    s2[i]=s1[i]+s1[i+1];
                    else
                    s2[i]=s1[i]+s1[0];
    }
    for(j=0;j<l;j++)
    printf("%c",s2[j]);
    return 0;
}

