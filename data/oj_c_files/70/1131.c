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
double c[100][100],a[500],b[500],max;
int i,j,n;
scanf("%d",&n);
for (i=1;i<=n;i++)
  scanf("%lf %lf",&a[i],&b[i]);
  for (i=1;i<=n;i++)
   {
    for (j=i+1;j<=n;j++)
     {
      c[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
     }
   }
 for (i=1;i<=n;i++)
  {
   for (j=i+1;j<=n;j++)
    {
     if (max<c[i][j])
     max=c[i][j];
    }
  }
  printf("%.4lf",max);
}

