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
long i,j,k,n,m,a[10][10],b[10][10];
    for (j=1;j<=9;j++)
       for (k=1;k<=9;k++)
          a[k][j]=b[k][j]=0;
scanf("%d%d",&a[5][5],&n);
m=a[5][5];b[5][5]=m;
for (i=1;i<=n;i++)
    {
    for (j=1;j<=9;j++)
       for (k=1;k<=9;k++)
          if (a[k][j]!=0) 
             {
               m=a[k][j];
               b[k][j]=b[k][j]+m;b[k+1][j]=b[k+1][j]+m;b[k-1][j]=b[k-1][j]+m;
               b[k][j+1]=b[k][j+1]+m;b[k][j-1]=b[k][j-1]+m;
               b[k+1][j+1]=b[k+1][j+1]+m;b[k+1][j-1]=b[k+1][j-1]+m;
               b[k-1][j-1]=b[k-1][j-1]+m;b[k-1][j+1]=b[k-1][j+1]+m;
              }
    for (j=1;j<=9;j++)
       for (k=1;k<=9;k++)
          a[k][j]=b[k][j];
    }
    for (j=1;j<=9;j++)
       {
        for (k=1;k<=8;k++)
            printf("%d ",a[k][j]);
        printf("%d\n",a[9][j]);
        }
}