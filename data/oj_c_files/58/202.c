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
      int i,j,k,n,m,l;
      char a[80],v[10];
      scanf("%d",&n);
      gets(v);
      for(i=0;i<n;i++)
      {
          j=0;
          gets(a);
        //puts(a);
          if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
          {
              l=strlen(a);
              for(j=0;j<l;j++)
              if(a[j]=='_'||(a[j]>='a'&&a[j]<='z')||(a[j]>='A'&&a[j]<='Z')||(a[j]>='0'&&a[j]<='9'))
                 continue;
              else
              {
                  printf("0\n");
                  break;
              }
          }
          else
          printf("0\n");
          
          if(j==l)
          printf("1\n");
      }
      getchar();
      getchar();
}
