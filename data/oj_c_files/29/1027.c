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
  int m,n,i,j;
  scanf("%d",&m);
  for(j=0;j<m;j++)
  {
    scanf("%d",&n);
    int a[n],b[n];
    double c[n],s=0;
    for(i=0;i<n;i++)
    {
      if(i==0)
      {
        a[i]=2;
        b[i]=1;
        c[i]=2;
      }else{
        a[i]=a[i-1]+b[i-1];
        b[i]=a[i-1];
        c[i]=1.0*a[i]/b[i];
      }
      s+=c[i];
    }
    printf("%.3lf\n",s);
  }
}