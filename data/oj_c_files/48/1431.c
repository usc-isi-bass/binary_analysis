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
    int a[11][11]={0},b[11][11]={0},c[11][11]={0},d[11][11]={0},e[11][11]={0};
    int m,n;
    scanf("%d %d",&m,&n);
    a[5][5]=m;
    int i,j,i1,j1,i2,j2,i3,j3,i4,j4;
    if(n==1)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                b[i][j]=2*a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+a[i-1][j+1]+a[i-1][j-1];
            }
        }
        for(i1=1;i1<=9;i1++)
        {
            for(j1=1;j1<=8;j1++)
            {
                printf("%d ",b[i1][j1]);
            }
            printf("%d\n",b[i1][j1]);
        }
    }
    if(n==2)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                b[i][j]=2*a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+a[i-1][j+1]+a[i-1][j-1];
            }
        }
        for(i1=1;i1<=9;i1++)
        {
            for(j1=1;j1<=9;j1++)
            {
                c[i1][j1]=2*b[i1][j1]+b[i1][j1-1]+b[i1][j1+1]+b[i1-1][j1]+b[i1+1][j1]+b[i1+1][j1+1]+b[i1+1][j1-1]+b[i1-1][j1+1]+b[i1-1][j1-1];
            }
        }
        for(i2=1;i2<=9;i2++)
        {
            for(j2=1;j2<=8;j2++)
            {
                printf("%d ",c[i2][j2]);
            }
            printf("%d\n",c[i2][j2]);
        }
    }
    if(n==3)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                b[i][j]=2*a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+a[i-1][j+1]+a[i-1][j-1];
            }
        }
        for(i1=1;i1<=9;i1++)
        {
            for(j1=1;j1<=9;j1++)
            {
                c[i1][j1]=2*b[i1][j1]+b[i1][j1-1]+b[i1][j1+1]+b[i1-1][j1]+b[i1+1][j1]+b[i1+1][j1+1]+b[i1+1][j1-1]+b[i1-1][j1+1]+b[i1-1][j1-1];
            }
        }
        for(i2=1;i2<=9;i2++)
        {
            for(j2=1;j2<=9;j2++)
            {
                d[i2][j2]=2*c[i2][j2]+c[i2][j2-1]+c[i2][j2+1]+c[i2-1][j2]+c[i2+1][j2]+c[i2+1][j2+1]+c[i2+1][j2-1]+c[i2-1][j2+1]+c[i2-1][j2-1];
            }
        }
        for(i3=1;i3<=9;i3++)
        {
            for(j3=1;j3<=8;j3++)
            {
                printf("%d ",d[i3][j3]);
            }
            printf("%d\n",d[i3][j3]);
        }
    }
    if(n==4)
    {
        for(i=1;i<=9;i++)
        {
            for(j=1;j<=9;j++)
            {
                b[i][j]=2*a[i][j]+a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j]+a[i+1][j+1]+a[i+1][j-1]+a[i-1][j+1]+a[i-1][j-1];
            }
        }
        for(i1=1;i1<=9;i1++)
        {
            for(j1=1;j1<=9;j1++)
            {
                c[i1][j1]=2*b[i1][j1]+b[i1][j1-1]+b[i1][j1+1]+b[i1-1][j1]+b[i1+1][j1]+b[i1+1][j1+1]+b[i1+1][j1-1]+b[i1-1][j1+1]+b[i1-1][j1-1];
            }
        }
        for(i2=1;i2<=9;i2++)
        {
            for(j2=1;j2<=9;j2++)
            {
                d[i2][j2]=2*c[i2][j2]+c[i2][j2-1]+c[i2][j2+1]+c[i2-1][j2]+c[i2+1][j2]+c[i2+1][j2+1]+c[i2+1][j2-1]+c[i2-1][j2+1]+c[i2-1][j2-1];
            }
        }
        for(i3=1;i3<=9;i3++)
        {
            for(j3=1;j3<=9;j3++)
            {
                e[i3][j3]=2*d[i3][j3]+d[i3][j3-1]+d[i3][j3+1]+d[i3-1][j3]+d[i3+1][j3]+d[i3+1][j3+1]+d[i3+1][j3-1]+d[i3-1][j3+1]+d[i3-1][j3-1];
            }
        }
        for(i4=1;i4<=9;i4++)
        {
            for(j4=1;j4<=8;j4++)
            {
                printf("%d ",e[i4][j4]);
            }
            printf("%d\n",e[i4][j4]);
        }
    }
}