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

int main()
{int i,j,sum[25]={0},a[25]={0},k,max=1;
scanf("%d",&k);
for (i=0;i<k;i++)
scanf("%d",&a[i]);
for (i=0;i<k;i++)
sum[i]=1;
for (i=k-1;i>=1;i--)
{for (j=i-1;j>=0;j--)
  { if (sum[i]>=sum[j]&&a[j]>=a[i])
        sum[j]=sum[i]+1;
  }
}
   for (i=0;i<k;i++)
   {if (sum[i]>max)
   max=sum[i];}
   printf("%d",max); 
   
}
