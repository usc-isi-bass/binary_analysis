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
  int a,b,c,n,i,d,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&d);
    a=1;b=1;
    if(d<3){printf("1\n");break;}
    for(j=3;j<=d;j++){
      c=a+b;
      a=b;
      b=c;
    }
    printf("%d\n",c);
  }
  return 0;
}
