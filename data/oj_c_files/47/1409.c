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
   int n;
   scanf("%d",&n);
   int sz[n];
   for(int i=0;i<n;i++)
   {
     scanf("%d",&(sz[i]));
   }
   for(int j=n-1;j>=0;j--)
   {
    if(j==0)
     {
        printf("%d",sz[j]);
     }
    else
     {
        printf("%d ",sz[j]);
     }
   }
   return 0;
}
