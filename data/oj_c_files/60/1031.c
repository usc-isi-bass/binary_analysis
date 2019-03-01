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
int n,i,j,count=0,prime=0;
scanf("%d",&n);
int su[10000];
for(i=1;i<=n;i++){
   for(j=1;j<i;j++){
      if(i%j==0){
         count+=1;
         }
      }
   if(count==1){
     su[prime]=i;
     prime+=1;
     }
     count=0;
   }
     count=0;
for(i=0;i<prime;i++){
    if(su[i+1]-su[i]==2){
      printf("%d %d\n",su[i],su[i+1]);
      count+=1;
      }
    }
if(count==0)
printf("empty");
return 0;
}


