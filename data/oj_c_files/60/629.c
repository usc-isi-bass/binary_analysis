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

int sushu(int a)
{int i,m=(int)sqrt(a);
 for (i=2;i<=m;i++)
   if (a%i==0) return 0;
 if ((a!=1)&&(a!=0))
   return 1;
 else
   return 0;
}
int main()
{
  int time=0,n,i;
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
    if (sushu(i-2)&&sushu(i))
    {
      printf("%d %d\n",i-2,i);
      time=1;
    }
   }
  if (time==0) printf("empty\n");
  return 0;
}
