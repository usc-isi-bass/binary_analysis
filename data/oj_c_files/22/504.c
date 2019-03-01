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
    int a,b,k;
    char i;
    scanf("%d",&a);
    b=-1;
    while((i=getchar())==',')
    {
      scanf("%d",&k);
      if(k>a)
      {
      b=a;
      a=k;
      }
      if(k>b&&k<a)
      b=k;
      }
      if(a==b||b==-1)
      printf("No");
      else 
      printf("%d",b);
      return 0;
}
