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
    int i,m,n,a[22][22],j,k,l,x;
    cin>>m>>n;
    for(i=0;i<=m+1;i++)
    {
        for(j=0;j<=n+1;j++)
        {
             a[i][j]=0;
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {cin>>x;a[i][j]=x;} 
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
             if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
             {k=i-1;l=j-1;
             cout<<k<<" "<<l<<endl;}
        }
    } 
    return 0;
}
