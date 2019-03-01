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
      int n,i;
      float b,c,p,q,j,k;
      scanf("%d",&n);
      scanf("%d %d",&p,&q);
      b=q/p;
      for(i=0;i<n-1;i++)
      {
                        scanf("%d %d",&j,&k);
                        c=k/j;
                        if(fabs(b-c)>0.05)
                        {
                                          if(b-c>0.05)
                                          printf("worse\n");
                                          else
                                          printf("better\n");
                        }
                        else
                        printf("same\n");
      }
      getchar();
      getchar();
}
