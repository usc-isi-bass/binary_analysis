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
      int n;
      scanf("%d",&n);
      float p0,q0;
      scanf("%d %d",&p0,&q0);
      for(int i=1;i<=n-1;i++)
      {
            float p,q;
            scanf("%d %d",&p,&q);
            if((q/p-q0/p0)<=0.05&&(q0/p0-q/p)<=0.05)
                 printf("same\n");
            else if((q/p-q0/p0)>0.05)
                 printf("better\n");
            else if((q0/p0-q/p)>0.05)
                 printf("worse\n");
      }
}