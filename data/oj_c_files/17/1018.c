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
    int n;
    for(scanf("%d%*c",&n);n>0;n--)
    {
        char a[101];
        gets(a);
        puts(a);
        int i,j,k,l=strlen(a);
        do
        {
        for(j=0;j<l;j++)
            if(a[j]==')')break;
        if(j!=l)
        {
            for(k=j;k>=0;k--)
                if(a[k]=='(')break;
            if(k<0)a[j]='?';
                else a[j]=a[k]=' ';
        }
        }while(j!=l);
        for(i=0;i<l;i++)
            if(a[i]=='(')a[i]='$';
            else if(a[i]!='?')a[i]=' ';
        puts(a);
    }
    return 0;
}
