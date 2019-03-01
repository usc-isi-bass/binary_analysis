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
  int max,max2,x;
  max2=-1;
  scanf("%d",&max);
  while (scanf(",")!=EOF)
  {
scanf("%d",&x);
if (x>max)
{
max2=max;
max=x;
continue;
} 
if ((x>max2)&&(x<max)) max2=x;
} 


if (max2<0) printf("No"); else printf("%d",max2);
}