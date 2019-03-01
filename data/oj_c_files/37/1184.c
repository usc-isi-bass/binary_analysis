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
    int t,i,j,flag,len;
    char a[100000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        gets(a);
        len=strlen(a);
        for(i=0;i<len-1;i++)
        {
            flag=1;
            if(a[i]=='@') continue;
            for(j=i+1;j<len;j++)
                if(a[i]==a[j])
                {
                    a[j]='@';
                    flag=0;
                }
            if(flag==1)
            {
                putchar(a[i]);
                break;
            }
        }
        if(i==len-1) printf("no");
        putchar(10);
    }
    return 0;
} 