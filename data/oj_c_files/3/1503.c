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
    int a,b,c,n,k,i;
i=0;
    int sz[10000];
    scanf("%d %d",&n,&k);
    for(a=0;a<n;a++){
      scanf("%d ",&(sz[a]));
    }
    for(a=0;a<n;a++){
      for(b=n-1;b>a;b--){
        c=sz[a]+sz[b];
        if(c==k){
        i=n*n*n;
        break;
        }else{
         i++;
        }
      }
      if(i==n*(n-1)/2){
        printf("no");
        break;
     }else if(i==n*n*n){
         printf("yes"); 
         break;
     }
   }
return 0;
}