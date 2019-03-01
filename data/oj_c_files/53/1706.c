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
{
   int n;scanf("%d",&n);
   int a[400]={0},b[400]={0};
   int i,j;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("%d",a[0]);
   for(i=1;i<n;i++)
   {
       for(j=0;j<i;j++)
       {
           if(a[i]==a[j])b[i]++;
       }
   }
   for(i=1;i<n;i++)
   {
       if(b[i]==0)
       {
           printf(",%d",a[i]);
       }
   }
    return 0;
}