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
   int n,i,sum1=0,sum2=0,a,b;
  scanf("%d",&n);
 for(i=0;i<n;i++)
 {
                 scanf("%d %d",&a,&b);
                 if(a==b)
                 sum1=sum1+0;
             if(a==0&&b==1)
             sum1++;
             if(a==1&&b==2)
             sum1++;
             if(a==2&&b==0)
             sum1++;
             if(a==0&&b==2)
             sum2++;
             if(a==1&&b==0)
             sum2++;
             if(a==2&&b==1)
             sum2++;
      
}
 if(sum1>sum2)
  printf("A");
  if(sum1==sum2)
  printf("Tie");
  if(sum1<sum2)
  printf("B");
}
