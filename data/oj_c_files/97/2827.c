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
  int a,n1,n2,n3,n4,n5,n6,b,c;
  scanf("%d",&a);
  n1=a/100;
  b=(a%100)/10;
    if(b>=5){
       n2=1;
       n3=(b-5)/2;
       n4=(b-5)%2;
    }else{
       n2=0;
       n3=b/2;
       n4=b%2;
    }
    c=a%10;
    n5=c/5;
    n6=c%5;
  printf("%d\n%d\n%d\n%d\n%d\n%d\n",n1,n2,n3,n4,n5,n6);
  return 0;
}