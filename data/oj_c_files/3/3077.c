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
  int n,k,sz[1000],sum[1000000],i,j,m=0,s=0;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++){
     scanf("%d",&sz[i]);
  }
  for(j=0;j<n;j++){
     for(i=j+1;i<n;i++){
        sum[m]=sz[j]+sz[i];
        m++;
     }
  }
  for(i=0;i<m;i++){
     if(sum[i]==k){
        sum[i]=1;
     }else{
        sum[i]=0;
     }
  }
  for(i=0;i<m;i++){
     s+=sum[i];
  }
  if(s==0){
     printf("no");
  }else{
     printf("yes");
  }
  return 0;
}