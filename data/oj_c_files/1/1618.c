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
  int hanshu(int k,int min);
  int n,i,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%d",&a);
      printf("%d\n",hanshu(a,2));
     }
  scanf("%d",&n);
  return 0;
}
  int hanshu(int k,int min){
      int j,a[k],b=1;
      if(k<min)return 0;
      for(j=min;j<=k/j;j++){
         if(k%j==0){
           b+=hanshu(k/j,j);
           }
         }
      return(b);
     }
