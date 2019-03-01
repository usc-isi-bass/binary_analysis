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
      int a,i,j,n,f[30];
      f[0]=1;f[1]=1;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      for(j=2;j<30;j++)f[j]=0;
                      scanf("%d",&a);
                      if(a<=2)printf("1\n");
                      else
                      {
                          for(j=2;j<a;j++)
                          {
                                          f[j]=f[j-1]+f[j-2];
                          }
                          printf("%d\n",f[a-1]);
                      }
      }
}
 