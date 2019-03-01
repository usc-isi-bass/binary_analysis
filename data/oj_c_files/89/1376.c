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
      int n,a=1,b=1,c[10000],i,t,y=0;
      scanf("%d",&n);
      for(i=0;i<n;i++) c[i]=n;
      while(a!=0||b!=0)
      {
          scanf("%d %d",&a,&b);
          if(a==0&&b==0) break;
          else
          {
          c[a]=0;
          if(c[b]!=0) c[b]++;
          }
          }

      for(i=0;i<n;i++)
      {
          if (c[i]==2*n-1) 
          {
            t=i;
            y=1;
            break;
            }
            }
            if(y) printf ("%d\n",t);
            else printf("NOT FOUND\n");
      }