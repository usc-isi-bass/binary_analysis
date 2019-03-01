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
   int n,i;
   int reverse(int num);
   for (i=1;i<=6;i++)
   {
     scanf("%d",&n);
     printf("%d\n",reverse(n));
   }   
   return(0);   
}

int reverse(int num)
{
  int s,num1;
  if (num>0) num1=num; else num1=-num;
  s=0;
  while (num1>0)
  {
    s=s*10+num1%10;
    num1=num1/10;
  }
  if (num<0) s=-s;
  return(s);
}