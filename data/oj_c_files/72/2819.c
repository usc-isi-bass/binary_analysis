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
    int a[25][25],m,n;
    memset(a,0,sizeof(a));
    scanf("%d",&m);
    scanf("%d",&n);
    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)  scanf("%d",&a[i][j]);

    for (int i=1;i<=m;i++)
        for (int j=1;j<=n;j++)
        {
            if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]
            &&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])
            printf("%d %d\n",i-1,j-1);
        }



}
