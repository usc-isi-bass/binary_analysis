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
      int a[20001],b[20001],i,j,k,n;
      scanf("%d",&n);
      scanf("%d",&k);
      scanf("%d",&j);
      for(i=0;i<=n;i++)
      {
                       a[i]=0;
                       b[i]=0;
                       }
      while(k>0||j>0)
      {
           a[k]++;
           b[j]++;
           scanf("%d",&k);
           scanf("%d",&j);
           }
      j=0;     
      for(i=0;i<=n-1;i++)
         if(a[i]==0&&b[i]>0)
         { 
          k=i;
          j=1;
          }
      if(j) printf("%d\n",k);
      else printf("NOT FOUND\n");
      }
                   
