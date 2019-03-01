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


void main()
{
  int m=0;
  int n,k;
  scanf("%d %d",&n,&k);
  while(1)
  {
    int i=++m;
    int j;
    for(j=0;j<n;j++,i=(i-k)*(n-1)/n)
     {
        if((i-k)%n==0)
           continue;
        else
           break;
      }
     if(j==n)
        break;
   }
   printf("%d",m);

}