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
      int a[26],b[26],i,j,k;
      scanf("%d",&k);
      for(i=0;i<k;i++)
      {
                      scanf("%d",&a[i]);
                      b[i]=0;
                      for(j=0;j<i;j++)
                      {
                                      if((a[j]>=a[i])&&(b[j]>b[i]))
                                      {
                                                                   b[i]=b[j];
                                      }
                      }
                      b[i]++;
                      
      }
      for(i=0;i<k;i++)
      {
                      if(b[i]>b[0])
                      {
                                   b[0]=b[i];
                      }
      }
      printf("%d",b[0]);
      getchar();getchar();getchar();getchar();
}
 
