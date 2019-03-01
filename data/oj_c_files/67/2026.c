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
      int i,j,m,n,g;
      double k,k1,k2,temp;
      scanf("%d",&n);
      scanf("%d %d",&i,&j);
      k=1.0*j/i;
      k1=k+0.05;
      k2=k-0.05;
      for(g=1;g<n;g++)
      {
                      scanf("%d %d",&i,&j);
                      temp=1.0*j/i;
                      if(temp<k2) printf("worse\n");
                      else if(temp>k1) printf("better\n");
                      else printf("same\n");
      }
      
}
