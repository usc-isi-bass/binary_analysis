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
  int n,i,j,i1,j1,i2,j2,x,p=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
      scanf("%d",&x);
      if(p)if(x==0){i1=i;j1=j;p=0;};
      if(!p)if(x==0){i2=i;j2=j;};
    };
  printf("%d\n",(i2-i1-1)*(j2-j1-1));
  return 0;
}

