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

int f(int x,int y)
{
 if(x<y)
  y=x;
 if(x==0)
  return 1;
 if(y==1)
  return 1;
 if(x>=y)
  return f(x,y-1)+f(x-y,y);
  return 0;
}
main()
{
 int t,n,m;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d %d",&m,&n);
  printf("%d\n",f(m,n));
 }
}
