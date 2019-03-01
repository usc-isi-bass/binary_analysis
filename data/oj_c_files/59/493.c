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
    int a[101][101],i,j,k,n,d;
    char b,t;
    scanf("%d",&n);
    scanf("%c",&t);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%c",&b);
            if(b=='.') a[i][j]=-1;
            else if(b=='@') a[i][j]=0;
            else a[i][j]=-2;
        }
        scanf("%c",&t);
    }
    scanf("%d",&d);
    
    for(k=0;k<d-1;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(a[i][j]==k)
                {
                    if(a[i-1][j]==-1)
                        a[i-1][j]=k+1;
                    if(a[i+1][j]==-1)
                        a[i+1][j]=k+1;
                    if(a[i][j+1]==-1)
                        a[i][j+1]=k+1;
                    if(a[i][j-1]==-1)
                        a[i][j-1]=k+1;
                }
            }
        }
    }
    k=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]>=0) k++;
    printf("%d",k);
 //   getch();
    return 0;
}


