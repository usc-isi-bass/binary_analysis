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

void main()
{
  int n,i,a[100][2];
  double s,m;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d %d",&a[i][0],&a[i][1]);
  s=1.0*a[0][1]/a[0][0];
  for(i=1;i<n;i++)
    {
    m=1.0*a[i][1]/a[i][0];
    if((m-s)>0.05)
    printf("better\n");
    else if((s-m)>0.05)
    printf("worse\n");
    else 
    printf("same\n");
    }
}
  
  