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

void course(char a[],int n)
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        if(a[k]==')')
        a[k]='?';
        else if(a[k]=='(')
        a[k]='$';
        else a[k]=32;
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n-1;i++)
        {
            if(a[i]=='$')
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[j]=='$')
                    break;
                    else if(a[j]=='?')
                    {
                        a[i]=32;
                        a[j]=32;
                        break;
                    }
                    else continue;
                }
            }
        }
    }
}
int main()
{
    char a[10000];
    int n,k;
    scanf("%d",&k);
    while(k--)
    {
        while(scanf("%s",a)!=EOF)
        {
            puts(a);
            n=strlen(a);
            course(a,n);
            puts(a);
        }
    }
    return 0;
}