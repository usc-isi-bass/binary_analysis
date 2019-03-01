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
  double n,x,y;
  double a,b;
  double m,p,q,h;
  scanf("%lf",&n);
  scanf("%lf %lf",&x,&y);
  m=y/x;
  int i=2;
  while(i<=n){
    scanf("%lf %lf",&a,&b);
    p=b/a;
    q=m-p;
    h=p-m;
    if(h>0.05){
      printf("better\n");
    }else if(q>0.05){
      printf("worse\n");
    }else{
      printf("same\n");
    }
    i++;
  }
  return 0;
}
  