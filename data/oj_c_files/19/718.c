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
    char a[1000],b[100],c[100],t[100];
    int lenb,lena,len;
    int i=0,j,k,flag;
    gets(c);
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(c);
    lena=strlen(a);
    lenb=strlen(b);
    while(i<len)
    {
        j=0;
        while(isgraph(c[i]))
            t[j++]=c[i++];
        t[j]='\0';
        if(strcmp(t,a))
            printf("%s",t);
        else
            printf("%s",b);
        if(c[i])
            printf("%c",c[i++]);
    }
    return 0;
}
