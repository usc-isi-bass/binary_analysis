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
    int m,n,j,i;
    double x=2,y=1,a;
    double sum=0;
    scanf("%d",&m);
    for(i=0;i<m;i++){
      scanf("%d",&n);
      for(j=0;j<n;j++){
      sum=sum+x/y;
      a=x;
      x=a+y;
      y=a;
      }
      printf("%.3lf\n",sum);
      sum=0;
      x=2;
      y=1;
    }
    scanf("%d",&n);
    return 0;
}
