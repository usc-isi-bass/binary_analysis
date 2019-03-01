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
      int fb[29];
      fb[1]=1;
      fb[2]=1;
      int i;
      for(i=3;i<22;i++)
      {
          fb[i]=fb[i-1]+fb[i-2];
      }
      //for(i=1;i<21;i++)
      //   printf("%d ",fb[i]);
      for(;n>0;n--)
      {
          int a;
          scanf("%d", &a);
          printf("%d\n",fb[a]);         
      }
}
