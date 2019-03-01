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
  int n,i,a[20000][2],z=0;
  scanf("%d",&n);
  for(i=0;;i++){
      scanf("%d%d",&a[i][0],&a[i][1]);
      if(a[i][0]==0&&a[i][1]==0)
         break;
  }
  for(int k=0;k<n;k++){
      int c=0;
      for(int j=0;j<i;j++){
          if(k==a[j][0])
             break;
          else if(k==a[j][1])
             c++;
      }
      if(c==n-1)
         printf("%d",k);
      else
         z++; 
   }
   if(z==n)
   printf("NOT FOUND"); 
   return 0;
}