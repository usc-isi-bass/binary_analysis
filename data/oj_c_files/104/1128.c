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


f(int m,int n)
{
  if (m<n)
    return f(m,n/2);
  else if (m>n)
    return f(m/2,n);
  else 
  return m;
}
        
int main(int argc, char *argv[])
{
  int x,y;
  scanf("%d%d",&x,&y);
  printf("%d",f(x,y));
  return 0;
}
