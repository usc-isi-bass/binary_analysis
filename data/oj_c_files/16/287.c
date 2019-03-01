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

int main(int argc, char *argv[])
{
  int num,b1,b2,b3,b4,b5;
  scanf("%d",&num); 
  b1=num/10000;
  b2=(num-10000*b1)/1000;
  b3=(num-10000*b1-1000*b2)/100;
  b4=(num-10000*b1-1000*b2-100*b3)/10;
  b5=(num-10000*b1-1000*b2-100*b3-10*b4);
  if (b1!=0)
     printf("%d%d%d%d%d",b5,b4,b3,b2,b1);
  else if (b2!=0)
     printf("%d%d%d%d",b5,b4,b3,b2);
  else if (b3!=0)
     printf("%d%d%d",b5,b4,b3);
  else if (b4!=0)
     printf("%d%d",b5,b4);
  else
     printf("%d",b5);
  return 0;
}
