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
      float a[4];
      float k;
      float c;
      int i;
      for(i=0;i<4;i++)
      {
                      scanf("%f",&a[i]);
      }
      scanf("%f",&c);
      c=2*3.1415926*c/360;
      k=(a[0]+a[1]+a[2]+a[3])/2;
      double s,sq;
      sq=(k-a[0])*(k-a[1])*(k-a[2])*(k-a[3]) - a[0]*a[1]*a[2]*a[3]*(double)cos(c/2)*(double)cos(c/2);
    
      if(sq<0)
      printf("Invalid input");
      else
      {
          s=sqrt(sq);
          printf("%.4f",s);
      }
    
}
