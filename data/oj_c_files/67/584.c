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
    int n,i;
    scanf("%d",&n);
    float a[n],b[n],s;
    scanf("%f %f",&a[0],&b[0]);
    s=b[0]/a[0];
    for(i=1;i<n;i++)
    {
      scanf("%f %f",&a[i],&b[i]);
      if(fabs(b[i]/a[i]-s)>0.05)
      {
        if(b[i]/a[i]-s>0)
        printf("better\n");
        else
        printf("worse\n");
      }
      else
      printf("same\n");
    }
    getchar();
    getchar();
} 