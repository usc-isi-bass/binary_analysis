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
      int w;
      scanf("%d",&w);
      if((w+12)%7==5)
       printf("1\n");
      w=w+12;
      if((w+31)%7==5)
       printf("2\n");
      w=w+31;
      if((w+28)%7==5)
       printf("3\n");
      w=w+28;
      if((w+31)%7==5)
       printf("4\n");
      w=w+31;
      if((w+30)%7==5)
       printf("5\n");
      w=w+30;
      if((w+31)%7==5)
       printf("6\n");
      w=w+31;
      if((w+30)%7==5)
       printf("7\n");
      w=w+30;
      if((w+31)%7==5)
       printf("8\n");
      w=w+31;
      if((w+31)%7==5)
       printf("9\n");
      w=w+31;
      if((w+30)%7==5)
       printf("10\n");
      w=w+30;
      if((w+31)%7==5)
       printf("11\n");
      w=w+31;
      if((w+30)%7==5)
       printf("12\n");
}