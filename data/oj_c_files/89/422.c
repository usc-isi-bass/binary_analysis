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
      int n,a,b,c[10000],d[10000],i,j=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
          c[i]=0;
          d[i]=0;
      }
      while(1)
      {
           scanf("%d %d",&a,&b);
           if(a==0&&b==0)
           break;
           else
           {
               c[a]++;
               d[b]++;
           }
      }
      for(i=0;i<n;i++)
      {
           if(c[i]==0&&d[i]==n-1)
           {
                 printf("%d",i);
                 j=1;
                 break;
           }
      }
      if(j==0)
      printf("NOT FOUND"); 
      getchar();
      getchar();
} 
                
