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
    int n,j,i;
    char nj[N][N],tj[N][N];
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%s",nj[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=(strlen(nj[i])-1);j++)
        {
            if(nj[i][j]=='A')
            {
                tj[i][j]='T';
            }
            else if(nj[i][j]=='T')
            {
                tj[i][j]='A';
            }
            else if(nj[i][j]=='G')
            {
                tj[i][j]='C';
            }
            else if(nj[i][j]=='C')
            {
                tj[i][j]='G';
            }
        }
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%s\n",tj[i]);
    }
    return 0;
}

