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

void main()
{
  int first=1,sum,n,k,i=2;
  scanf("%d %d",&n,&k);
  sum=first*n+k;
  while (i<=n)
  {
      if (sum%(n-1)!=0){i=2;first++;sum=first*n+k;continue;}
      sum=sum/(n-1)*n+k;
      i++;
  }
  printf("%d\n",sum);
}