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

struct spot
{double x;
 double y;
       }a[100];
 int main()
 {
     int i, j, n; 
     double t=0, m; 
     scanf("%d", &n);
     for(i=0;i<n;i++)
     {scanf("%lf%lf", &a[i].x, &a[i].y);}
     for(i=0;i<n-1;i++)
     {for(j=n-1;j>i;j--)
        {if(((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y))>t)
          t=(a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y);}
      }
      printf("%.4lf", sqrt(t));
      return 0;
}      