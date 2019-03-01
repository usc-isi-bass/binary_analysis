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
    int m,n;
    int a[25][25];
 
    cin>>m>>n;
 
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        cin>>a[i][j];
    
    for(int i=1;i<=m;i++)
    {
        a[i][0]=0;
        a[i][n+1]=0;
    }
    for(int i=1;i<=n;i++)
    {
        a[0][i]=0;
        a[m+1][i]=0;
    } 
    
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            if(a[i][j]>=a[i-1][j] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i][j-1] && a[i][j]>=a[i][j+1])
            cout<<i-1<<' '<<j-1<<endl;
    

    
    return 0;
} 
