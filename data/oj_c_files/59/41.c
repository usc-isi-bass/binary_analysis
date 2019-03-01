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
    int p[102][102],s[102][102],s0[102][102],n,i,j,m,k,total;
    char a[102][102];
    scanf("%d",&n);
    for(i=0;i<=101;i++) for(j=0;j<=101;j++) {s[i][j]=1;p[i][j]=0;s0[i][j]=1;}
    for(i=1;i<=n;i++) scanf("%s",a[i]);
    for(i=1;i<=n;i++) for(j=1;j<=n;j++)
    {
        switch(a[i][j-1])
        {
            case '.':
            p[i][j]=1;
            break;
            case '@':
            p[i][j]=1;
            s[i][j]=0;
            break;
            default:
            break;
        }
    }
    scanf("%d",&m);
    for(k=1;k<m;k++)
    {
        for(i=1;i<=n;i++) for(j=1;j<=n;j++)
        {
            if(p[i][j]!=0) s0[i][j]=s[i][j]*s[i+1][j]*s[i][j+1]*s[i-1][j]*s[i][j-1];
        }
        for(i=1;i<=n;i++) for(j=1;j<=n;j++) s[i][j]=s0[i][j];
    }
    total=n*n;
    for(i=1;i<=n;i++) for(j=1;j<=n;j++) total=total-s[i][j];
    printf("%d",total);
    return 0;
}