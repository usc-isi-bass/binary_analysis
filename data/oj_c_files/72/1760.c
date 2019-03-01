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
    int a[22][22],i,j,k=0,m,n,o,p,c[22],d[22];
    scanf("%d %d",&m,&n);
     for(i=0;i<m+2;i++)
    {
                    for(j=0;j<n+2;j++)
                    {
                           a[i][j]=0;
                    }
    }     
    for(i=1;i<m+1;i++)
    {
                    for(j=1;j<n+1;j++)
                    {
                             scanf("%d ",&a[i][j]);
                    }
    }     
    for(i=1;i<m+1;i++)
    {
                    for(j=1;j<n+1;j++)
                    {
                                    if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
                                    {
                                                                                                                       printf("%d %d\n",i-1,j-1);
}
}
}
    return 0;
}

