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
  int n,a,b,c,d,e,f;
  scanf("%d",&n);
  if(n>=100){
  a=(int)n/100;
  }
  else{
  a=0;
  }
  if(n%100>=50){
  b=(int)(n%100)/50;
  }
  else{
  b=0;
  }
  if(n%50>=20){
  c=(int)(n%50)/20;
  }
  else{
  c=0;
  }
  if((n%50)%20>=10){
  d=((n%50)%20)/10;
  }
  else{
  d=0;
  }
  if(n%10>=5){
  e=(n%10)/5;
  }
  else{
  e=0;
  }
  f=n%5;
 printf("%d\n",a);
  printf("%d\n",b);
  printf("%d\n",c);
  printf("%d\n",d);
  printf("%d\n",e);
  printf("%d\n",f);

  return 0;
}