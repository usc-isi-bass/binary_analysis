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
  int n,k,m,m1,i;
  scanf("%d %d",&n,&k);
  for(m=1;;m++)
  {
    m1=m;
    for(i=1;i<=n;i++)
    {
      if(m1%n==k)m1=(m1-k)*(n-1)/n;
      else {m1=0;break;}
    }
    if(m1){printf("%d",m);break;}
  }
}