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
    char a[250],b[250];
    gets(a);gets(b);
    int c[300]={0};
    int l1,l2,max;
    int flag=0;
    l1=strlen(a);
    l2=strlen(b);
    if (l1>l2) max=l1;
    else max=l2;
    int i;
    for(i=0;i<max;i++)
    {
        if(i<l1&&i<l2)
        {
            c[i+1]+=(c[i]+a[l1-1-i]+b[l2-1-i]-2*'0')/10;
            c[i]=(c[i]+a[l1-1-i]+b[l2-1-i]-2*'0')%10;
        }
        else if(i<l1&&i>=l2)
        {
            c[i+1]+=(c[i]+a[l1-1-i]-'0')/10;
            c[i]=(c[i]+a[l1-1-i]-'0')%10;
        }
        else if(i<l2&&i>=l1)
        {
            c[i+1]+=(c[i]+b[l2-1-i]-'0')/10;
            c[i]=(c[i]+b[l2-1-i]-'0')%10;
        }
    }
    for(i=max;i>=0;i--)
    {
        if(i==0&&flag==0)
        printf("%d",c[i]);
        if(c[i]==0&&flag==0)
        continue;
        printf("%d",c[i]);
        flag=1;
    }
    return 0;
}