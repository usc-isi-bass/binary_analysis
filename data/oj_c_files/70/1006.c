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
      double a[n][2];
      for(int i=0;i<n;i++)
      scanf("%lf %lf",&a[i][0],&a[i][1]);
      double b[n][n];
      for(int j=0;j<n;j++)
      {
              for(int k=j+1;k<n;k++)
              b[j][k]=(a[j][0]-a[k][0])*(a[j][0]-a[k][0])+(a[j][1]-a[k][1])*(a[j][1]-a[k][1]);
               
      } 
      
      double m=0.0;
      for(int j=0;j<n;j++)
      {
              for(int k=j+1;k<n;k++)
              {if(b[j][k]>m)
              m= b[j][k];}
      }
      double p=sqrt(m); 
      printf("%.4lf",p);
      
} 
