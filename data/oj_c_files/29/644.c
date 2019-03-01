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
    int m,n,e;
    int i=0,j=0;
    double sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++){
       scanf("%d",&n);
       int k=2,l=1;
       for(j=0;j<n;j++){
          sum=sum+(double)k/l;
          e=k;
          k=k+l;
          l=e;
       }
       printf("%.3lf\n",sum);
	   sum=0;
    }
    return 0;
}
  
