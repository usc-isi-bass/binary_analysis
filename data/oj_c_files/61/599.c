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
  int i,j,n,zu;
  int fei[50],a[50];
  scanf("%d",&zu);
  for(i=1;i<=zu;i++){
     scanf("%d",&n);
     a[i]=n;
  }
  fei[1]=1;
  fei[2]=1;
  for(i=3;i<=20;i++){
     fei[i]=fei[i-1]+fei[i-2];
  }
  for(i=1;i<=zu;i++){
     printf("%d\n",fei[a[i]]);
  }
   scanf("%d\n",&fei[a[i]]);
   return 0;
}