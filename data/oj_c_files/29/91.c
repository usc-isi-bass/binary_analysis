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
 int m,n,i,k,a,b;
 double x,sum;
  scanf("%d ",&m);
  for(k=0;k<m;k++){
     scanf("%d ",&n);
    for(i=0,a=2,b=1;i<n;i++,a=a+b,b=a-b){
        x=(double)a/b; 
        sum+=x;
    }
     printf("%.3lf\n",sum);
     sum=0;
  }

   return 0;
}
