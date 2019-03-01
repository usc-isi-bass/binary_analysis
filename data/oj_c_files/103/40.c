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
    int i,j,m,n,t,s,l,r,c[1000];
    char a[1000],b[1000];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-'a'+'A';
    }
    for(i=0;i<l;i++)
    {
        t=1;
        for(j=1;i+j<l;j++)
            {
                if(a[i]==a[i+j])
                    t++;
                else
                break;
            }
        printf("(%c,%d)",a[i],t);
        i=i+j-1;
    }
    getchar();
    getchar();
}
