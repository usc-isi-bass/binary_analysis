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
      int b,c,e,f,g;
      scanf("%d",&b);
      int a[b],d[b];
      for(c=0;c<b;c++)
      scanf("%d",&a[c]);
      d[b-1]=1;
      for(c=b-2;c>=0;c--)
      {
      d[c]=1;f=0;
      for(e=b-1;e>c;e--)
      {
      if(a[c]>=a[e])
      {
      if(d[e]>f)
      f=d[e];
      }
      }
      d[c]+=f;
      }
      g=d[0];
      for(c=0;c<b;c++)
      {
      if(d[c]>g)
      g=d[c];
      }
      printf("%d",g);
      }