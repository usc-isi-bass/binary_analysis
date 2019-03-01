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

int main ()
{
  int a,b;
  scanf("%d%d",&a,&b);
  do
  {
     if(a==b)
      {
          break;
      } 
      if(a>b)
      {
          a=a/2;
      }
      else
       {
          b=b/2;
      }
      
  }
  while(1);
  printf("%d",a);
  return 0;
}