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
      int k,i,x;
      scanf("%d",&k);
      int h[k];
      int a[k];
      for(i=0;i<k;i++)
      {
                       scanf("%d",&h[i]);
      }
      for(x=0;x<k;x++)
      {
                      a[x]=1;
      }
      int c,d;
      for(c=k-2;c>=0;c--)
      {
                         for(d=c+1;d<k;d++)
                         {
                                          
                                           if((h[c]>=h[d])&&(a[d]>=a[c]))
                                           a[c]=a[d]+1;
                         }
      }
      int y=1;
      int m;
      for(m=0;m<k;m++)
      {
                      if(a[m]>y)
                      y=a[m];
      }
      printf("%d",y);

      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      
}
    