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
      char g;
      int c,d,f,a[25],b[25],k,e[25];
      e[0]=1;
      scanf("%d",&k);
      for (c=0; ;c++)
      {
      scanf("%d%c",&a[c],&g);
      if (g!=' ')
      break;
      else ;
      } 
      for (c=0;c<=k-1;c++)
      {b[c]=a[k-1-c];}
       
      for(c=1;c<=k-1;c++)
      {
          for(d=0,e[c]=0;d<=c-1;d++)
          {
           if (b[c]>=b[d] && e[c]<=e[d])
           e[c]=e[d];
           else ;
          }
          e[c]++;
      }
     // for (c=0;c<=k-1;c++)
     // {
     // printf("%d ",e[c]);
     // }
 for (c=0,f=e[0];c<=k-1;c++)
      {
      if (f<=e[c])
      f=e[c];
      else ;
      }
      printf("%d",f);
}
     