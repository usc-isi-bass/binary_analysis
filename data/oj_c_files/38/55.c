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

int main(int argc, char *argv[])
{
  int n,i,j;
  scanf("%d",&n);
  int num;
  double a[1000],sum=0,average,total=0;
  for (i=0;i<=n-1;i++)
  {
      scanf("%d",&num);
      sum=0;
      total=0;
      for (j=0;j<=num-1;j++)
      {
          scanf("%lf",a+j);
          sum+=a[j];
      }
      average=sum/num;
      for (j=0;j<=num-1;j++)
          total+=(a[j]-average)*(a[j]-average);
      printf("%.5lf",sqrt(total/num));
      (i<=n-2)?printf("\n"):printf("");
  }        
  return 0;
}
