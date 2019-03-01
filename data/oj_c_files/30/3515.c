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
      int n,i,k=0,sum=0;
      int c,b;
      int a[100]={0};
      scanf("%d",&n); 
      for(i=1;i<=n;i++)
      {
          b=i/10;
          c=i-10*b;
          if(i%7!=0&&c!=7&&b!=7)
          {
                a[k]=i;
                k++;
          }
      }
      for(k=0;a[k]!=0;k++)
      sum=sum+a[k]*a[k];
      printf("%d",sum);
} 
