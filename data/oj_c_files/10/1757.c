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
         int a[L]={0},b[L]={0};
         int i,j,k,max,t;
         scanf("%d",&k);
         for(i=k;i>=1;i--)
         scanf("%d",&a[i]);
         b[1]=1;
         for(i=2;i<=k;i++)
         {
                 max=0;
                 for(j=1;j<i;j++)
                 {
                            if(a[j]<=a[i]&&b[j]>max)
                             {
                                       max=b[j];
                             }
                 }
                 b[i]=max+1;
         }
         t=0;
         for(i=1;i<=k;i++)
         {
                 if(b[i]>=t)
                 t=b[i];
         }
         for(i=1;i<=k;i++)
         {
                 if(b[i]==t)
                 printf("%d",b[i]);
         }
}