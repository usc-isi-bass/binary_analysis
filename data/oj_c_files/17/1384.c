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
    char a[10][20],b[10][20];
    int i,t,y,u=0;
   while(scanf("%s",a[u])!=EOF)
  {
    strcpy(b[u],a[u]);
    for(t=0;a[u][t]!=0;t++)
    {
        if(a[u][t]!=40&&a[u][t]!=41)
            b[u][t]=32;
        if(b[u][t]==41)
        {
            for(y=t;y>-1;y--)
            {
                if(b[u][y]==40)
                    {b[u][y]=32;b[u][t]=32;break;}
            }
        }
    }
    for(t=0;b[u][t]!=0;t++)
    {
        if(b[u][t]==40)
            b[u][t]=36;
        else if(b[u][t]==41)
            b[u][t]=63;
    }
    puts(a[u]);
    puts(b[u]);
    u++;

    }
    return 0;
}
