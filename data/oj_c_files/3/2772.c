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
  int a[1000],b[500000];
  int i,m,n,k,d=0,c;
   scanf("%d",&n);
   scanf("%d",&k);
  for(i=1;i<=n;i++){
    scanf("%d",&(a[i]));
  }
  for(m=1;m<n;m++){
   for(i=1;i<=n-m;i++){
    c=a[m]+a[i+m];
    d=d+1;
    b[d]=c;
   }
  }
  for(i=1;i<=d;i++){
    if(b[i]==k){
     printf("yes");
     break;
   }else if(i==d){
    printf("no");
   }  
 }
 return 0; 
}


