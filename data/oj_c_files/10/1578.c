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
     int *p=(int*)malloc(n*sizeof(int));
     int *q=(int*)malloc(n*sizeof(int));      
     q[n-1]=1;
     int best=q[n-1];
     for(int i=0;i<n;i++) scanf("%d",&p[i]);
     for(int i=n-2;i>=0;i--)
     {
          int a=0;    
          for(int k=n-1;k>i;k--)
          {
               if (p[i]>=p[k]&&q[k]>=a) a=q[k];
          }
          q[i]=a+1;
          if(q[i]>best) best=q[i];
     }
     printf("%d\n",best);
}
