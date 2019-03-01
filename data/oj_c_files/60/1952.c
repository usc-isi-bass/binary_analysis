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

int ispr(int a)
{
    int i,just=1;
    for(i=2;i*i<=a;i++)
    if(a%i==0)
    {
              just=0;
              break;
              }
    return just;
}
main()
{
      int n,a;
      scanf("%d",&n);
      if(n<5)
      printf("empty\n");
      else
      for(a=5;a<=n;a++)
      if(ispr(a)&&ispr(a-2))
      printf("%d %d\n",a-2,a);
      }