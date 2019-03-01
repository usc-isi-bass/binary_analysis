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

 int main() {
     int m,n,i,j,s;
     int a[301];
    while(1){
        scanf("%d%d",&n,&m);
     if(m==0&&n==0)break;
           s=n;
      for(i=1;i<=n;i++){
         a[i]=0;
  }
         i=0;j=0;
while(i<n){
    i++;
     if(a[i]==1){
         if(i==n)
            i=0;
       continue;
    }
   j++;
  if(j==m){
        a[i]=1;
        s--;
        j=0;
      }
      if(i==n)i=0;
         if(s==1)break;
       }
      for(i=1;i<=n;i++){
           if(a[i]==0) printf("%d\n",i);
       }
   }
     return 0;
   }