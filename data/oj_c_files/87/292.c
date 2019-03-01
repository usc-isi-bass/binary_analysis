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

int main(){
  int a,b,c,d,e,f,sum,i;
  for(i=0;;i++){
  scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
  if(a==0) return 0;
  d=d+12;
  
  sum=d*3600+e*60+f-(a*3600+b*60+c);
  printf("%d\n",sum);
  }
  return 0;
}