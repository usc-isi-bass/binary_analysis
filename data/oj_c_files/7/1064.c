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
    int i,j,t,x,m,n;
    char s[300],sub[300],re[300];
    gets(s);
    gets(sub);
    gets(re);
    n=strlen(s);
    m=strlen(sub);
    x=strlen(re);
    for (i=0;i<=n-m;i++)
    {
        for (j=0,t=i;j<m;j++)
        {
            if(s[t]==sub[j])   {t++;}
            else break;
        }
        if(j==m) break;
    }
    if (i==n-m+1) {;}
    else
    {
        for (t=i+x;t<n+x-m;t++)
        {
            s[t]=s[t-x+m];
        }
        for (j=i,t=0;j<i+x;j++,t++)
        {
            s[j]=re[t];
        }
    }
    puts(s);
    getchar();
    getchar();
    getchar();
    return 0;
}
