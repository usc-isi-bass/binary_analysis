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

void main()
{
    int hanshu(int juzhen[5][5],int x,int y);
    int a[5][5],i,x,y,k,e;
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
        {
            scanf("%d",&a[i][k]);
        }
    }
    scanf("%d %d",&x,&y);
    e=hanshu(a,x,y);
    if(e==1)
    {
        for(i=0;i<5;i++)
        {
            for(k=0;k<5;k++)
            {
                if(k==0)
                printf("%d",a[i][k]);
                else
                printf(" %d",a[i][k]);
                if(k==4)
                printf("\n");
            }
        }
    }
    if(e==0)
    {
        printf("error");
    }
}
int hanshu(int juzhen[5][5],int m,int n)
{
    int c,d[5],p;
    if(m>=0&&m<5&&n>=0&&n<5)
    {
        c=1;
        for(p=0;p<5;p++)
        {
            d[p]=juzhen[m][p];
            juzhen[m][p]=juzhen[n][p];
            juzhen[n][p]=d[p];
        }
        return (c);
    }
    else
    {
        c=0;
        return (c);
    }
}