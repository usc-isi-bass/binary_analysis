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
    int l,i,c;
    char a[200]={'\0'};
    char b[200]={'\0'};
    scanf("%s",a);
    l=strlen(a);
    if(l>=3)
    {
        if(((a[0]-'0')*10+a[1]-'0')>=13)
        {
            b[0]=((a[0]-'0')*10+a[1]-'0')/13+'0';
            c=((a[0]-'0')*10+a[1]-'0')%13;
            for(i=1;i<l-1;i++)
            {
                b[i]=(c*10+a[i+1]-'0')/13+'0';
                c=(c*10+a[i+1]-'0')%13;
            }
        }
        if(((a[0]-'0')*10+a[1]-'0')<13)
        {
            b[0]=((a[0]-'0')*100+(a[1]-'0')*10+a[2]-'0')/13+'0';
            c=((a[0]-'0')*100+(a[1]-'0')*10+a[2]-'0')%13;
            for(i=1;i<l-2;i++)
            {
                b[i]=(c*10+a[i+2]-'0')/13+'0';
                c=(c*10+a[i+2]-'0')%13;
            }
        }
    }
    if(l==2)
    {
        b[0]=((a[0]-'0')*10+a[1]-'0')/13+'0';
        c=((a[0]-'0')*10+a[1]-'0')%13; 
    }
    if(l==1)
    {
        b[0]='0';
        c=a[0]-'0';
    }
    printf("%s\n",b);
    printf("%d",c);
    getchar();
    getchar();
}                                   