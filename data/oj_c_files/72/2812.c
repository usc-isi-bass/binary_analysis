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
 int m,n;
 int a[22][22]={0};
 scanf("%d %d",&m,&n);
 for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                     scanf("%d",&a[i+1][j+1]);
 for(int i=0;i<m;i++)
              for(int j=0;j<n;j++)
                       if(a[i+1][j+1]>=a[i+1][j]&&a[i+1][j+1]>=a[i][j+1]&&a[i+1][j+1]>=a[i+2][j+1]&&a[i+1][j+1]>=a[i+1][j+2])
                       printf("%d %d\n",i,j);
 getchar();
 getchar();
 getchar();
}
