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

int main (){
    int n,b,j,i,k;
    scanf ("%d",&n);    
    char c[102][102],d[102][102],ttt;
scanf ("%c",&ttt);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            scanf ("%c",&c[i][j]);
        }
        scanf ("%c",&ttt);
    }
    scanf ("%d",&b);
    for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                d[i][j]=c[i][j];
            }
        }
    for (k=1;k<b;k++)
    {
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                if (c[i][j]=='@')
                {
                                 if (c[i+1][j]=='.')
                                 d[i+1][j]='@';
                                 if (c[i-1][j]=='.')
                                 d[i-1][j]='@';
                                 if (c[i][j+1]=='.')
                                 d[i][j+1]='@';
                                 if (c[i][j-1]=='.')
                                 d[i][j-1]='@';
                }
            }
        }
        for (i=1;i<=n;i++)
        {
            for (j=1;j<=n;j++)
            {
                c[i][j]=d[i][j];
            }
        }
    }   
    int js=0;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (c[i][j]=='@')
            js++;
        }
    }
    printf ("%d",js);
    return 0;
}