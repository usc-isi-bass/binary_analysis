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


int pfCb(const void *x ,const void *y)
{
    return *((int*)x)-*((int*)y); 
}

int pfCg(const void *x ,const void *y)
{
    return *((int*)y)-*((int*)x); 
}

main()
{
      int n,j=0,k=0;
      char gender[7];
      float m[40],f[40],height;
      scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
              scanf("%s %f",gender,&height);
              if(gender[0]=='m')
              {
                  m[j]=height;
                  j++;
              }
              else
              {
                  f[k]=height;
                  k++;
              }
      }
      qsort(m,j,sizeof(float),pfCb);
      qsort(f,k,sizeof(float),pfCg);
      printf("%.2f",m[0]);
      for(int t=1;t<j;t++)
      {
              printf(" %.2f",m[t]);
      }
      for(int t=0;t<k;t++)
      {
              printf(" %.2f",f[t]);
      }
}
