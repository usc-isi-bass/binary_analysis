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
      int n,i,j;
      scanf("%d",&n);
      int a[25],len[25];
      for(i=0;i<n;i++)
          scanf("%d",&a[i]);
      for(i=0;i<n;i++)
          len[i]=1;
      int lenmax=1;
      for(i=n-2;i>=0;i--)
      {
          int max=0;
          for(j=n-1;j>i;j--)
          {
              if((a[j]<=a[i])&&(len[j]>max))
                 max=len[j];
          }
          len[i]=max+1;
          lenmax=lenmax>len[i]?lenmax:len[i];
      }
      printf("%d\n",lenmax);
      return 0;
}   