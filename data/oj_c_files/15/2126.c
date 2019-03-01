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
  int n,i,j,c,ans=0,flag=0;
  scanf("%d",&n);
  for (i=1;i<=n;i++){
    for (j=1;j<=n;j++){
      scanf("%d",&c);
      if (!c){
        if (flag){
          ans=ans+j-flag-1;
          flag=0;
        }else flag=j;
      }
    }
    flag=0;
  }
  printf("%d",ans);
}