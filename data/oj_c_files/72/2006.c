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

int main(){
    int i,j,m,n,s,a[25][25],b[25][25];
    scanf("%d%d",&m,&n);
    for (i=0;i<=m+1;i++)
    for (j=0;j<=n+1;j++)
    {a[i][j]=0;b[i][j]=0;}
     for (i=1;i<=m;i++)
    for (j=1;j<=n;j++)
      scanf("%d",&a[i][j]);
        for (i=1;i<=m;i++)
    for (j=1;j<=n;j++)
    {
        if ((a[i][j]>=a[i+1][j])&&(a[i][j]>=a[i][j-1])&&(a[i][j]>=a[i-1][j])&&(a[i][j]>=a[i][j+1]))
          b[i][j]=-1;
    }
        for (i=1;i<=m;i++)
    for (j=1;j<=n;j++)
    if (b[i][j]==-1) printf("%d %d\n",i-1,j-1);
    return 0;
}
