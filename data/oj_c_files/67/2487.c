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
{     int n;scanf("%d",&n);
      float* a=(float*)malloc(n*sizeof(float));
      float* b=(float*)malloc(n*sizeof(float));
      float* c=(float*)malloc(n*sizeof(float));
      for(int i=0;i<n;i++)
     {scanf("%f %f",&a[i],&b[i]);
      c[i]=b[i]/a[i];
     }
      for(int i=1;i<n;i++)
      {if(c[i]-c[0]>0.05)
       printf("better\n");
       else if(c[0]-c[i]>0.05)
       printf("worse\n");
       else 
       printf("same\n");
      }      
      
      
      
     
}