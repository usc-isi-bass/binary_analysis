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
    char a[301]={0},t;
    int i,cnt,flg=0;
    gets(a);
    for(t='A';t<='Z';t++)
    {
        cnt=0;
        for(i=0;i<=strlen(a)-1;i++)
        {
            if(a[i]==t)cnt++;
        }
        if(cnt!=0)
        {
            flg++;
            printf("%c=%d\n",t,cnt);
        }
    }
    for(t='a';t<='z';t++)
    {
        cnt=0;
        for(i=0;i<=strlen(a)-1;i++)
        {
            if(a[i]==t)cnt++;
        }
        if(cnt!=0)
        {
            flg++;
            printf("%c=%d\n",t,cnt);
        }
    }
    if(flg==0)printf("No");
    return 0;
}
