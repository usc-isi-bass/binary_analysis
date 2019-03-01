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
      int b[20]={1,1},m,n,i;
      
      for(i=2;i<20;i++)
      b[i]=b[i-1]+b[i-2];
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
      {
          scanf("%d",&m);
          printf("%d\n",b[m-1]);
      }
      getchar();
      getchar();
}
