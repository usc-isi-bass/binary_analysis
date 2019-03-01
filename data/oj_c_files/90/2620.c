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
    int N,e;
    scanf("%d",&N);
    for(e=0;e<N;e++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        int i,j,k,t;
        int f[100][100]={0};
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==1||j==0||j==1)
                {    
                    f[i][j]=1;
                }
                else
                {
                    if(j>=i)
                    f[i][j]=f[i][j-i]+f[i-1][j];
                    else
                    f[i][j]=f[i-1][j];
                }
            }
        }
        printf("%d\n",f[n][m]);
    }
    }
                    
                
        
