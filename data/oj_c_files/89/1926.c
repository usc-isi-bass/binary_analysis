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
      int i,j,a,b,c,d,e,f;
      int g[100000]; 
      scanf("%d",&a);
      for (i=0;i<a;i++)
      g[i]=1;
      for (i=0;i<100000;i++)
      {
          scanf("%d %d",&b,&c);
          if (b==0 && c==0)
          break;
          g[b]=-a;
          g[c]++;
      }
      d=0;
      for (i=0;i<a;i++)
      {
          if (g[i]==a)
          {
                      printf("%d",i);
                      d++;
                      
          }
      }
      if (d==0)
      printf("NOT FOUND");
      getchar ();
      
}
