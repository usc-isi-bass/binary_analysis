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
    char a[200][200],i,t,c,d;
    int n=0;
    for(i=0;i<200;i++)
    {
        scanf("%s",a[i]);
        n++;
        t = getchar();
        if(t=='\n')
            break;
    }
    for(i=0;i<n;i++)
    {
        int j,m=0;
        for(j=0;j<n;j++)
        {
            if(strlen(a[i])>=strlen(a[j]))
            {
                m++;
            }
        }
        if(m==n)
        {
            c=strlen(a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        int j,m=0;
        for(j=0;j<n;j++)
        {
            if(strlen(a[i])<=strlen(a[j]))
            {
                m++;
            }
        }
        if(m==n)
        {
            d=strlen(a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        if(strlen(a[i])==c)
        {
            printf("%s\n",a[i]);
            break;
        }
    }
     for(i=0;i<n;i++)
    {
        if(strlen(a[i])==d)
        {
            printf("%s\n",a[i]);
            break;
        }
    }

    return 0;
}