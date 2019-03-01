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
      int i,m,max=0;
      scanf("%d",&m);
      int a[m];
      for (i=0;i<m;i++)
      {
          scanf("%d",&a[i]);
          if (a[i]>max)
          max=a[i];
      }
      int b[max+1];
      float sum;
      b[0]=1;
      b[1]=2;
      for (i=2;i<=max;i++)
      {
          b[i]=b[i-1]+b[i-2];
      }
      for (i=0;i<m;i++)
      {
          sum=0;
          for (int j=0;j<a[i];j++)
              sum+=(float)b[j+1]/b[j];
          printf("%.3f\n",sum);
      }
} 
