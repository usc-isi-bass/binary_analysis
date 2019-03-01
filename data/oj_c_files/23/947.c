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
    char str[200],*p,*q,*r,ans[200];
    int len,i;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    gets(str);
    len=strlen(str);
    for (p=str+len;p>str;p--) 
        *p=*(p-1);
    *p=' ';*(p+len+1)=' ';
    for (p=str+len+1,r=ans;p>=str;)
    {
        q=p-1;
        while (*q!=' ') q--;
        for (i=1;q+i<=p;i++)
            *r++=*(q+i);
        p=q;
    }
    for (i=0;i<len;i++) printf("%c",*(ans+i));
    return 0;
}
