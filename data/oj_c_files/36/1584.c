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

main()
{
    char s[100],c,a[100]={0};
    int i,n=0,p=1,w=0;
    while((c=getchar())!=' ')
    {
        for(i=1;i<=n;i++)
        {
            if(c==s[i])
            {
                a[i]++;
                w=1;
                break;
            }
        }
        if(w) w=0;
        else s[++n]=c;
    }
    while((c=getchar())!='\n')
    {
        for(i=1;i<=n;i++)
        {
            if(c==s[i])
            {
                a[i]--;
                break;
            }
        }
        if(i==n+1)
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]!=-1)
            {
                p=0;
                break;
            }
        }
    }
    if(p==0) printf("NO");
    else printf("YES");
}
