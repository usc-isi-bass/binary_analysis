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
      char a[100000];
      int b,c,d,e,f,h;
      int g[100000];
      scanf("%d",&b);
      for(c=0;c<b;c++)
      {
      for(h=0;h<100000;h++)
      g[h]=0;
      scanf("%s",a);
      e=strlen(a);
      for(d=0;d<e-1;d++)
      {
      for(f=d+1;f<e;f++)
      {
                        if(a[f]==a[d])
                        {
                        g[f]++;
                        g[d]++;
                        }
                        }
                        if(f==e&&g[d]==0)
                        {
                        printf("%c\n",a[d]);
                        break;
                        }
                        }
      if(d==e-1)
      printf("no\n");
      }
      }