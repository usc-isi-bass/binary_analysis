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
      int a;
      int b,c,d,e;
      scanf("%d",&a);
      if(a==10000)
      printf("00001");
      b=a/1000;
      c=(a-b*1000)/100;
      d=(a-b*1000-c*100)/10;
      e=a-b*1000-c*100-d*10;
      if(b!=0)
      printf("%d%d%d%d",e,d,c,b);
      else
      {if(c!=0)
      printf("%d%d%d",e,d,c);
      else
      {if(d!=0)
      printf("%d%d",e,d);
      else
      printf("%d",e);}}
}