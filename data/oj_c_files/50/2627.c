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
      int i,j,k,w;
      scanf("%d",&w);
      if((w+12)%7==5)
      printf("1\n");
      if((w+12+31)%7==5)
      printf("2\n");
      if((w+12+31+28)%7==5)
      printf("3\n");
      if((w+12+31+28+31)%7==5)
      printf("4\n");
      if((w+12+31+28+31+30)%7==5)
      printf("5\n");
      if((w+12+31+28+31+30+31)%7==5)
      printf("6\n");
      if((w+12+31+28+31+30+31+30)%7==5)
      printf("7\n");
      if((w+12+31+28+31+30+31+30+31)%7==5)
      printf("8\n");
      if((w+12+31+28+31+30+31+30+31+31)%7==5)
      printf("9\n");
      if((w+12+31+28+31+30+31+30+31+31+30)%7==5)
      printf("10\n");
      if((w+12+31+28+31+30+31+30+31+31+30+31)%7==5)
      printf("11\n");
      if((w+12+31+28+31+30+31+30+31+31+30+31+30)%7==5)
      printf("12\n");
      }
