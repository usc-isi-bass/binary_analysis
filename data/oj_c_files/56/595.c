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
  int n,a,b,c,d,e;
  scanf("%d",&n);
  a=n/10000;
  b=(n-a*10000)/1000;
  c=(n-a*10000-b*1000)/100;
  d=(n-a*10000-b*1000-c*100)/10;
  e=n-a*10000-b*1000-c*100-d*10;
  
  printf("%d",e);
  if(d!=0)
  {printf("%d",d);}
  if(c!=0)
  {printf("%d",c);}
  if(b!=0)
  {printf("%d",b);}
  if(a!=0)
  {printf("%d",a);}

  return 0;  
  
}
