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
  int n,c[4]={0},i;
  double a[4];
  scanf("%d",&n);
  for(i=0;i<n;i++)
      {
         int bi;
         scanf("%d",&bi);
         if(bi<=18)
           {
             c[0]++;
            }
         else if(bi>18&&bi<=35)
           {
             c[1]++;
            }
         else if(bi>35&&bi<=60)
           {
             c[2]++;
            }
         else if(bi>60)
           {
             c[3]++;
            }
      }
     for(i=0;i<4;i++)
        {
          a[i]=(double)c[i]/n*100;
        }
     printf("1-18: %.2lf",a[0]);
    printf("%%\n");
     printf("19-35: %.2lf",a[1]);
    printf("%%\n");
     printf("36-60: %.2lf",a[2]);
    printf("%%\n");
     printf("60??: %.2lf",a[3]);
    printf("%%");
  return 0;
}