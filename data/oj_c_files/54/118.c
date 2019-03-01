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

long m;
  int n,k;
int ok(long x)
{
  int i;
  for (i=1;i<=n;i++)
    {
    if ((x-k)%n!=0) 
      return 0;
      else if ((x-k)/n==0) return 0;
    x=(x-k)/n*(n-1);
    }
  return 1;
}
int main()
{
  
  cin >>n>>k;
  m=k;
  while (1)
    {
    m+=n;
    if (ok(m)) 
     {cout <<m<<endl; return 0;}
    }
} 