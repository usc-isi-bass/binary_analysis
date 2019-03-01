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
  int n;
  scanf("%d",&n);
  int a=n/10;
  int b=n%10;
  int m=0;
  int t;
  while(a!=0){
  m=b*10;
  t=a;
  a=a/10;
  b=t%10;
  b+=m;
  }
  printf("%d\n",b);
  return 0;


}