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

int a[10] = {100,50,20,10,5,1};
int main()
{
  int n,k,i;
  scanf("%d",&n);
  k = 0;
 for(i = 0;i < 6;i ++)
{
  while(n >= a[i])
    {
      n -= a[i];
      k ++;
    }
  printf("%d\n",k);
  k = 0;    
}
 return 0;
}
