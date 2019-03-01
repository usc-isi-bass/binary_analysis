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
      int i,j,k,n,m=0,l=0,p=0,q=0;
      int a[100000][2];
      scanf("%d",&n);
      scanf("%d %d",&a[0][0],&a[0][1]);
      while (a[m][0]>0||a[m][1]>0)                    //??m? 
      {
            scanf("%d %d",&a[m+1][0],&a[m+1][1]);
            m++;
      }
      for (i=0;i<n;i++)
      {
          l=0; 
          for (j=0;j<m;j++)                           //??????i 
          {
              if (a[j][1]==i)
              l++;
          }
          if (l==n-1)
          {
                     p=0;
                     for (j=0;j<m;j++)               //i?????? 
                     {
                         if (a[j][0]==i)
                         p++;
                     }
                     if (p==0)
                     {
                              printf ("%d\n",i);
                              q++;
                     }
          }
      }
      if (q==0)
      printf("NOT FOUND\n");
      getchar();
      getchar();
}