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

int main(void)
{
 int num ;
 scanf("%d",&num);
 int a[num],flag[num];
 for (int i = 0; i < num; i ++)
 {
  scanf("%d",&a[i]);
  flag[i] = 1;
 }
 for (int i = 0; i < num; i ++)
 {
  for (int j = 0; j < i; j ++)
  {
   if (a[j] >= a[i])
   {
    flag[i] = flag[j] + 1 > flag[i] ? flag[j] + 1 : flag[i];
   }
  }
 }
 int max = flag[0];
 for (int i = 1; i < num; i ++)
 {
  if (flag[i] > max)
   max = flag[i];
 }
 printf("%d\n",max);
 return 0;
}