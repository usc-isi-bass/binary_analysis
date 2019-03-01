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
  int n,a;
  scanf("%d",&n);
  
  for(int i=1;i<1000;i++){
    if(n!=1&&n%2==0){
      a=n;
      n=n/2;
      printf("%d/2=%d\n",a,n);
    }else if(n!=1&&n%2!=0){
      a=n;
      n=n*3+1;
      printf("%d*3+1=%d\n",a,n);
    }else if(n==1){
      printf("End\n");
      break;
    }
  }
  
  return 0;
}