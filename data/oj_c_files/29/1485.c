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
      int n,m,i,k;
      float sum=0;
      float a[NUM]={0},b[NUM]={0};
      b[1]=1;
      b[2]=2;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
             scanf("%d",&m);
             for(k=3;k<=m+1;k++)
             b[k]=b[k-1]+b[k-2];
             for(k=1;k<=m;k++)
             a[k]=b[k+1]/b[k];
             for(k=1;k<=m;k++)
             sum=sum+a[k];
             printf("%.3f\n",sum);
             sum=0;
      }          
      getchar();
      getchar();
      getchar();
      getchar();
} 
