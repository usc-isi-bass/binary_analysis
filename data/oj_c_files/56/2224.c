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
int a,i=1,j=1;
scanf("%d",&a);
while(i*=10)
  if(a/i==0) break;

while(j<i){
  printf("%d",(a/j)%10);
  j*=10;
}
}