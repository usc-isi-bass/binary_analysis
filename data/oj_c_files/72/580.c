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
        int m,n,i,j;
        int a[22][22];
        cin>>m>>n;
        for(i=0;i<=n+1;i++) a[m+1][i]=a[0][i]=0;
        for(i=0;i<=m+1;i++) a[i][n+1]=a[i][0]=0;
        for(i=1;i<=m;i++)
           for(j=1;j<=n;j++) cin>>a[i][j];
        for(i=1;i<=m;i++)
           for(j=1;j<=n;j++)
              if((a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i][j+1]))
                cout<<i-1<<' '<<j-1<<endl;
        return 0;
}
