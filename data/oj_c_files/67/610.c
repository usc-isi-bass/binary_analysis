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

main()
{
  int n;
  scanf("%d",&n);
  int i;
  double m0,m,x,a[n+1],b[n+1],t0,t;
  for(i=0;i<n;i++)
    scanf("%lf %lf",&a[i],&b[i]);
  t0 = a[0] - b[0];
  m0 = t0 / a[0];
  for(i=1;i<n;i++)
  {
    t = a[i] - b[i];
    m = t/a[i];
    if(m >= m0)
    {
      x = m - m0;
      if(x > 0.05)
        printf("worse\n");
      else
        printf("same\n");
    }
    else
    {
      x = m0 - m;
      if(x >0.05)  
         printf("better\n");
      else
        printf("same\n");
     }
  }
}
