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
      int c,i,c1,c2;
      scanf("%d",&c);
      for (i=1;;i++)
      {
          if(c%2==1&&c!=1)
          {
          c1=c*3+1;
          printf("%d*3+1=%d\n",c,c1);
          c=c1;
          }
          if(c%2==0)
          {
          c2=c/2;
          printf("%d/2=%d\n",c,c2);
          c=c2;
          }
          if(c==1)
          break;
      } 
      printf("End\n");    
}