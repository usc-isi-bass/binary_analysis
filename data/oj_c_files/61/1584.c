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
  int n;
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int a;
    scanf("%d",&a);
    if(a==1||a==2){
      printf("1\n");
    }else{
      int x=1,y=1,z;
      for(int m=3;m<=a;m++){
         z=x+y;
         x=y;
         y=z;
      }
      printf("%d\n",y);
    }
   }
   return 0;
}