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

int S(int x);
int main()
{
  int m,i,x,y;
  scanf("%d",&m);
  for(i=3;i<=m/2;i++)
     if(S(i)==0&&S(m-i)==0)
  printf("%d %d\n",i,m-i);
  return 0;
}
   int S(int x)
  {int i,k,r=0;
     k=sqrt(x);
    for(i=2;i<=k;i++)
      if(x%i==0){
            r=1;break;}
      return r;
   }