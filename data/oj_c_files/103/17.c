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
      int i,l,d[1000],k=0;
      char a[1000],c[1000];
      scanf("%s",a);
      l=strlen(a);
      for(i=0;i<l;i++)
      {
           if(a[i]>='a')
           a[i]=a[i]-'a'+'A';
           if(i==0)
           {
           c[k]=a[i];
           d[k]=1;
           }
           else
           {
               if(a[i]==a[i-1])
               d[k]++;
               if(a[i]!=a[i-1])
               {
                   k++;
                   d[k]=1;
                   c[k]=a[i];
               }
           }
      }
      for(i=0;i<=k;i++)
      {
          printf("(%c,%d)",c[i],d[i]);
      }
      getchar();
      getchar();
      getchar();
}
