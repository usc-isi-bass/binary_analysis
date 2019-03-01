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


int refine(int a)
{
  if(a%2==1) return((a-1)/2);
  else return(a/2);
}

int main()
{
  int a,b,i;
  scanf("%d%d",&a,&b);
  while(a!=b)
  {
    if(a>b) a=refine(a);
    else b=refine(b);
  }
  printf("%d",a);
  return 0;
}  