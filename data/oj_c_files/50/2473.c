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

int main()
{
  int w,d[12],i;
  scanf("%d",&w);
  d[0]=w;
  d[1]=d[0]+12;
  d[2]=d[1]+31;
  d[3]=d[2]+28;
  d[4]=d[3]+31;
  d[5]=d[4]+30;
  d[6]=d[5]+31;
  d[7]=d[6]+30;
  d[8]=d[7]+31;
  d[9]=d[8]+31;
  d[10]=d[9]+30;
  d[11]=d[10]+31;
  d[12]=d[11]+30;
   for (i=1;i<=12;i++)
   {
      if (d[i]%7==5) printf ("%d\n",i);
    }
  return 0;
}
  