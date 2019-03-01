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

int main(){
 int n,b[100002],i,k,m,j,m1;
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  scanf("%d",&b[i]);
 }
 scanf("%d",&k);
 m=n;
 for(i=1;i<=n;i++){
  if(b[i]==k){m--;}
 }
 m1=m;
 for(i=1;i<=n;i++){
        if(b[i]!=k){
   m1--;
  }
  if(b[i]==k){
   for(j=i;j<=n-1;j++){
    b[j]=b[j+1];
   }
   b[n]=k;
   i=i-1;
  }
  if(m1==0){break;}
 }
 for(i=1;i<=n;i++){
  if(b[i]!=k&&m!=1){
   printf("%d ",b[i]);
   m=m-1;
  }
  else if(b[i]!=k&&m==1){
   printf("%d",b[i]);
   break;
  }
 }
 scanf("%d",&n);
 return 0;
} 