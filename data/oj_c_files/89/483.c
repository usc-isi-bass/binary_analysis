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
      int x[200000],y[200000];
      int i,j,k;
      scanf("%d",&n);
      do
      {
                     scanf("%d %d",&i,&j);
                     x[i]++;
                     y[j]++;
      }
      while(i!=0||j!=0);
      for(k=0;k<n;k++)
      {
                      if(x[k]==0&&y[k]==n-1)
                      {
                                            printf("%d",k);
                                            break;
                      }
                      if(k==n)
                              printf("NOT FOUND");
      }
}
                                            