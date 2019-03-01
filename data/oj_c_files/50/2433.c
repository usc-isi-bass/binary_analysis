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
 int w,t,i, s;
 scanf("%d", &w);
 int month[12]={12, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
 s=0;
 for (i=1; i<=12; i++)
 {
  
  s=s+month[i-1];

  t=w+s;
  if (t%7==5)
  {
     
     printf("%d\n", i);
  } 
 }
}
