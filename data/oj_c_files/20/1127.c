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

void main()
{
    int i,k,n;
    char str[11],substr[4],a[14],b;
    while(scanf("%s%s",str,substr)!=EOF)
    {
        n=strlen(str);
        b=str[0];
        k=0;
        for(i=1;i<n;i++)
        {
            if(b<str[i])
            {b=str[i];k=i;}
        }
        for(i=0;i<=k;i++)
        a[i]=str[i];
        a[k+1]=substr[0];
        a[k+2]=substr[1];
        a[k+3]=substr[2];
        for(i=k+4;i<=n+2;i++)
        a[i]=str[i-3];
        for(i=0;i<=n+2;i++)
        printf("%c",a[i]);
        printf("\n");
    }
}