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

int f(int x)
{
    if(x%2==0)
    {
      printf("%d/2=%d\n",x,x/2);
      return(x/2);
    }
    else
    { 
      printf("%d*3+1=%d\n",x,x*3+1);
      return(x*3+1);
     }
}
int main()
{
  int x;
  scanf("%d",&x);
  while(x!=1)
  {
   x=f(x);
  }
  if(x==1)
   printf("End");;
  return 0;
}

