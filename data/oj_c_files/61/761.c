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
    if (n<=1) 
    return n;
    else
    return fib(n-2)+fib(n-1);
}
main()
{
      int n;
      scanf ("%d",&n);
      int a;
      for (int i=0;i<n;i++)
      {
          scanf ("%d",&a);
          printf ("%d\n",fib(a));
      }
}