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
      int w,i;
      scanf("%d",&w);
      int a[11]={31,28,31,30,31,30,31,31,30,31,30};
      
      if((w+12%7)%7==5)
          printf("1\n");
      w=(w+12%7)%7;
      for(i=0;i<11;i++)
      {
          if((w+a[i]%7)%7==5)
              printf("%d\n",i+2);
          w=(w+a[i]%7)%7;
      }
}
