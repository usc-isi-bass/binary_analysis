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
{     int f[501][501],i,j,num,n,m;
      for (i=1;i<=500;i++)
      {f[i][1]=1; f[1][i]=1; f[i][0]=1;}
      
      for (i=2;i<=500;i++)
      for (j=2;j<=500;j++)
      { if (i>j) f[i][j]=f[j][j];
        else f[i][j]=f[i-1][j]+f[i][j-i];
      }
      scanf("%d",&num);
      for (i=0;i<num;i++)
      {
          scanf("%d %d",&m,&n);
          printf("%d\n",f[n][m]);
      }

}
