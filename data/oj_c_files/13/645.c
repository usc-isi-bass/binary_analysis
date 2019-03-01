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
      int i,j,n;
      scanf("%d",&n);
      int a[20000];
      for(i=0;i<n;i++)
      {
                      scanf("%d",&a[i]);
                      }
      printf("%d",a[0]);
      for(i=1;i<n;i++)
      {
                      int k;
                      k=0;
                      for(j=0;j<i;j++)
                      {
                                      if(a[j]!=a[i]) k++;
                                      else break;
                                      }
                                      if(k==i) printf(" %d",a[i]);
                      }
      getchar();getchar();getchar();getchar();getchar();
      } 
