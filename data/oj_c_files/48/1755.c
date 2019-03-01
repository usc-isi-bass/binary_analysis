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
    int a1[9][9],a2[9][9],m,n,i,j;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            a1[i][j]=0;
            a2[i][j]=0;
        }
    }
    scanf("%d %d",&m,&n);
    a1[4][4]=m;
    a2[4][4]=m;
    for(;n>0;n--)
    {
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(a1[i][j]!=0)
                {
                    a2[i][j]=a2[i][j]+a1[i][j];
                    a2[i-1][j-1]=a2[i-1][j-1]+a1[i][j];
                    a2[i-1][j]=a2[i-1][j]+a1[i][j];
                    a2[i-1][j+1]=a2[i-1][j+1]+a1[i][j];
                    a2[i][j-1]=a2[i][j-1]+a1[i][j];
                    a2[i][j+1]=a2[i][j+1]+a1[i][j];
                    a2[i+1][j-1]=a2[i+1][j-1]+a1[i][j];
                    a2[i+1][j]=a2[i+1][j]+a1[i][j];
                    a2[i+1][j+1]=a2[i+1][j+1]+a1[i][j];
                }
            }
        }
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                a1[i][j]=a2[i][j];
            }
        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j==0)
            printf("%d",a2[i][j]);
            else if(j==8)
            printf(" %d\n",a2[i][j]);
            else
            printf(" %d",a2[i][j]);
        }
    }
}