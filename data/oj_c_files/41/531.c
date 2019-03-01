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
  int i;
  int a[5]={5,2,1,3,4};
  for(i=0;i<4;i++)
  {
    printf("%d ",a[i]);
  }
  printf("%d",a[i]);
}