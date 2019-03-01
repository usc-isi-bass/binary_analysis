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
    int m,n;
    scanf("%d %d",&m,&n);
    int sz[m+2][n+2];
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            scanf("%d",&sz[i][j]);
        }
    }
    for(int i=0;i<m+2;i++)
    {
        sz[i][0]=0;
        sz[i][n+1]=0;
    }
    for(int i=0;i<n+2;i++)
    {
        sz[0][i]=0;
        sz[m+1][i]=0;
    }
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(sz[i][j]>=sz[i-1][j]&&
               sz[i][j]>=sz[i+1][j]&&
               sz[i][j]>=sz[i][j-1]&&
               sz[i][j]>=sz[i][j+1])
            {
                printf("%d %d\n",i-1,j-1);
            }
        }
    }
    return 0;
}
