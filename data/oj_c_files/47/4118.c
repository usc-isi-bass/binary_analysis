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
  int sz[100],sz1[100],n,i,j,l,k,e;
  scanf("%d",&n);
    for(i=0;i<n;i++)
     {
      scanf("%d",&sz[i]); 
      }
       for(int j = 1 ; j <= n ; j++){
       for(int l = 0; l < n - j; l++){                          
            e = sz[l+1];
            sz[l+1] = sz[l];
            sz[l] = e;
   }
                   }
printf("%d",sz[0]);
for(k=1;k<n;k++)
{
 printf(" %d",sz[k]);
}
return 0;
}