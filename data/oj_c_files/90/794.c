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
    long int f[100][100];
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    for (;t>=1;t--)
    {
        for (i=0;i<=100;i++)
            f[1][i]=1;
        scanf("%d%d",&m,&n);
        for (i=2;i<=n;i++)
            for (j=0;j<=m;j++)
            {
                f[i][j]=f[i-1][j];
                if (j>=i) f[i][j]=f[i][j]+f[i][j-i];
            }
        printf("%ld\n",f[n][m]);
    }
    return 0;
}
