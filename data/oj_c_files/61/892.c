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

  
int fib(int n)
{
   int i,s;
   if(n==1||n==2)
    s=1;
   if(n>2)
  {
   s=fib(n-1)+fib(n-2);
  }
  return s;
}
int main()
{
   int n;
   int a[100000];
   scanf("%d",&n);
   for(int i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++)
  printf("%d\n",fib(a[i]));
  getchar();
  getchar();
}

 