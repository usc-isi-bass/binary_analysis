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
    int n,i,j,a=0;
    char zf[N][25];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%s",zf[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        a=0;
        if((zf[i][0]>='0')&&(zf[i][0]<='9'))
        {
            a=1;
        }
        for(j=0;j<=(strlen(zf[i])-1);j++)
        {
            if((((zf[i][j]>='a')&&(zf[i][j]<='z'))||((zf[i][j]>='A')&&(zf[i][j]<='Z'))||((zf[i][j]>='0')&&(zf[i][j]<='9'))||(zf[i][j]=='_'))==0)
            {
                a=1;
            }
        }
        if(a==0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
