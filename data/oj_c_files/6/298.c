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
      int num;
      scanf("%d",&num);
      int i;
      for(i=0;i<num;i++)
      {
        int m,n;
        scanf("%d %d",&m,&n);
        int a[m][n];
        for(int j=0;j<m;j++)
          for(int h=0;h<n;h++)
          scanf("%d",&a[j][h]);
        int sum=0;
        for(int j=0;j<n;j++)
          sum+=a[0][j];
        for(int j=1;j<m;j++)
        sum+=a[j][0];
        for(int j=1;j<n;j++)
        sum+=a[m-1][j];
        for(int j=1;j<m-1;j++)
        sum+=a[j][n-1];
        printf("%d\n",sum);                
      }
      getchar();
      getchar();
}
