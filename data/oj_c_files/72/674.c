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
    int height[22][22],top[21][21];
    int m=0,n=0,i=0,j=0;
    cin>>m>>n;
    for(i=0;i<=m+1;i++)
       for(j=0;j<=n+1;j++)
       {
           if(i==0 || j==0 || i==m+1 || j==n+1) height[i][j]=0;
           else cin>>height[i][j];
           top[i][j]=0;
       }
    for(i=1;i<=m;i++)
       for(j=1;j<=n;j++)
       {
           if(height[i][j]>=height[i-1][j] && height[i][j]>=height[i+1][j] && height[i][j]>=height[i][j-1] && height[i][j]>=height[i][j+1])
           top[i][j]=1;
       }
    for(i=0;i<=m;i++)
       for(j=0;j<=n;j++)
       if(top[i][j]==1)
        cout<<i-1<<" "<<j-1<<endl;
        return 0;
}