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
  int n;
  double a,b;
  double x,y;
  scanf("%d",&n);
  scanf("%lf%lf",&a,&b);
  while(--n)
  {
    scanf("%lf%lf",&x,&y);          
    if(b/a-y/x>0.05) printf("worse\n");
    else if(b/a-y/x<-0.05) printf("better\n");
         else printf("same\n");
  }
 return 0;    
}
