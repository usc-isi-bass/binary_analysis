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
 unsigned int a,b=0,c;char d;

 for(scanf("%d",&a);(d=getchar())!='\n';)
 {
  if(a>b)
  {
   c=b;
   b=a;
  }
  else if(a==b)
   ;
  else if(a>=c)
   c=a;
  scanf("%d",&a);
 }
  if(a>b)
  {
   c=b;
   b=a;
  }
  else if(a==b)
   ;
  else if(a>=c)
   c=a;
 if(c==0)
  printf("No");
 else printf("%d",c);
 return 0;
}
